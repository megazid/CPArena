#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

struct point{
    string name;
    ll x,y,z,w;
    ll sum;
    ll idx;
};

ll countstring(string x){
    ll total = 0;
    for(char c:x){
        total+= (c + 0);
    }
    return total;
}

bool sorted(point a,point b ){
    if(a.sum < b.sum)return true;
    else if(a.sum == b.sum && a.idx > b.idx)return true;
    else return false;
}

int main(){
    init();
    int n;cin>>n;
    vector<point> points(n);
    loop(n){
        cin>>points[i].name>>points[i].x>>points[i].y>>points[i].z>>points[i].w;
        points[i].sum = points[i].y + points[i].w + countstring(points[i].name);
        points[i].idx = i;
    }

    sort(points.begin(),points.end(),sorted);

    loop(n){
        cout<<points[i].name<<" "<<points[i].x<<" "<<points[i].y<<" "<<points[i].z<<" "<<points[i].w<<"\n";
    }


}