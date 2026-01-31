#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <algorithm>

#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

bool can(vector<pair<int,int>> &vec,int n,int m,int k,vector<int> &vec1){
    while(k!=0){
        if(m<=vec[0].first)return true;
        else{
            int tmp=0;
            if(vec[0].second!=0){
                tmp+=vec[0].second;
                vec[0].second=0;
            }
            if(tmp+k>=vec1[0]){
                k-=(vec1[0]-tmp);
                sort(vec.begin(),vec.end());
                sort(vec1.begin(),vec1.end());
                if(m<=vec[0].first)return true;
                else continue;
            }
            else return false;
        }
    }
    return false;
}  


int main(){
    init();

    int n,k;
    cin>>n>>k;
    vector<int> vec1(n);
    vector<int> vec2(n);
    vector<pair<int,int>> vec(n);
    for(int &it:vec1)cin>>it;
    for(int &it:vec2)cin>>it;

    for(int i=0;i<n;i++){
        vec[i].first = (vec2[i]/vec1[i]);
        vec[i].second = (vec2[i]%vec1[i]);
    }
    sort(vec.begin(),vec.end());
    sort(vec1.begin(),vec1.end());
    int l=0,r=1000,ans=0;
    while(l<=r){
        int m = (l+r)/2;
        if(can(vec,n,m,k,vec1)){
            ans = m;
            l=m+1;
        }
        else r=m-1;
    }

    cout<<ans+1<<"\n";

    return 0;

}