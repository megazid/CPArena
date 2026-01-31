#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define UWU ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);



void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<char,int> mp;
    for(char c:s)mp[c]++;
    int mini=n;
    int maxi=0;
    for(auto it:mp){
        int z = it.second;
        if(mini>z)mini=z;
        if(maxi<z)maxi=z;
    }
    if(mp.size()<5)mini=0;
    cout<<mini<<" "<<maxi<<"\n";

}
    


int main(){
    UWU;
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve(); 
    }

    return 0;
}