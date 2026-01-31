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

// binary search code 
int binary_search(vector<int> &vec,int x){
    int l=0,r=vec.size()-1;
    while(l<=r){
        int m = (l+r)/2;
        if(vec[m]==x)return m+1;
        else if(vec[m]<x)l=m+1;
        else r=m-1;
    }
    return -1;
}

// LOWER_BOUND / UPPER_BDOUND

// binary search on function , 


int main(){
    init();

    
    
    return 0;
}