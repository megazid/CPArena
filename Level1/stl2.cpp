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

void print(set<int> &st){
    for(auto it:st)
        cout<<it<<" ";
    cout<<"\n";
}


int main(){

    init();
    // priority_queue<int> pq;
    // pq.push(4);
    // pq.push(1);
    // pq.push(6);
    // pq.push(3);
    // cout<<"\n\n\n";
    // while(!pq.empty()){
    //     pq.
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    /* 
        -- binary serach tree like set 

    
    map<string,int> ageof;
    
    ageof["ahmed"]=20;
    ageof["mohamed"]=23;
    ageof["mahmoud"]=27;
    ageof["ali"]=31;


    auto f = ageof.find("mohamed");
    if(f!=ageof.end()){
        cout<<"exit ";
        pair<string,int> p = *f;
        cout<<p.second<<"\n";
    }
    else cout<<"not exti\n";
    // cout<<ageof["ahmed"]<<" "<<ageof["mohamed"]<<" "<<ageof["mahmoud"]<<"\n";
    map<string,int>::iterator it;
    for(it =ageof.begin();it!=ageof.end();it++){
        pair<string,int> p = *it;
        cout<<p.first<<" "<<p.second<<"\n";
    }
    */

    /* set
    int q;cin>>q;
    set<int> st;

    while(q--)
    {
        string s;
        int x;
        cin>>s>>x;

        if(s=="insert")st.insert(x);
        else if(s=="find"){
            auto f = st.find(x);
            cout<<((f!=st.end())? "found\n":"not found\n");
        }
        else if(s=="lower_bound"){
            auto l = st.lower_bound(x);
            cout<<((l!=st.end())? *l:-1)<<"\n";
        }
        else{
            auto u = st.upper_bound(x);
            cout<<((u!=st.end())? *u:-1)<<"\n";
        }
    }
    */
    return 0;
}