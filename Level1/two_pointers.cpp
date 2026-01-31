#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
// classic two pointer  
bool two_pointer(vector<int> &vec,int n,int f){
    int r=n-1,l=0;
    while(r>l){
        if(vec[r]+vec[l]==f)return 1;
        else if(vec[r]+vec[l]>f)r--;
        else l++;
    }

    return 0;
}
// fixed size sliding window
int sliding_window(vector<int> &vec,int n,int s){
    int l=0,r=s-1;
    int ans =0;
    for(int i=l;i<=r;i++)ans+=vec[i];
    while(r<n-1){
        int tmp = ans + vec[++r] - vec[l++];
        ans = max(tmp,ans);
    }
    return ans;
}
// another solution for fixed 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> vec(n);
    for(int &it:vec)cin>>it;
    int tmp = 0;
    for(int i=0;i<k;i++)tmp+=vec[i];
    
    int best = tmp;
    int l=0,r=k;
    while(r<n){
        tmp = tmp + vec[r++] - vec[l++];
        best = max(tmp,best);
    }
    cout<<best<<"\n";
}

// variable size sliding window 
int vsliding_windows(vector<int> &vec,int n,int m){
    int r=0,l=0;
    int ans = 0,sum=0;
    while(l<n){
        while(r<n && sum + vec[r] <= m){
            sum += vec[r];
            r++;
        }
        ans = max(ans,sum);
        sum -= vec[l];
        l++;
    }
    return ans;
}

int main(){
    init();
    int n,f;
    cin>>n>>f;
    vector<int> vec(n);
    for(int &it:vec)cin>>it;  
    // cout<<(two_pointer(vec,n,f)? "Yes\n":"No\n");
    // cout<<sliding_window(vec,n,f)<<"\n";
    cout<<vsliding_windows(vec,n,f)<<"\n";
    
    return 0;
}