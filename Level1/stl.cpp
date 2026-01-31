#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <set>

#define ll long long
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void stackm(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    // st.empty(); // st.size(); //st.swap();
}

void queuem(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    //q.size(); q.swap(); q.emplace();
}   

void dequemF(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);

    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}

void dequemB(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    while(!dq.empty()){
        cout<<dq.back()<<" ";
        dq.pop_back();
    }   
}


void print(vector<int> &v){
    vector<int>::iterator it;
    it = v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        ++it;
    }

    
    
    // for(auto it:v)cout<<it<<" ";
}

int main(){
    init();
    deque<int> d;
    //d.push_front();d.push_back();d.pop_front();d.pop_back();d.front();d.back();

    // stack `LIFO`
    cout<<"Stack\n";stackm();cout<<"\n";


    // queue `FIFO`
    cout<<"Queue\n";queuem();cout<<"\n";

    
    // dqueu
    cout<<"DeQue Front\n";dequemF();cout<<"\n";
    cout<<"DeQue Back\n";dequemB();cout<<"\n";

    /* VECTOR
    vector<int> vec = {1,2,3,4,5};
    vec.erase(vec.begin()+2);
    vec.insert(vec.begin()+2,3);

    print(vec);
    cout<<"\n\n\n";
    reverse(vec.begin(),vec.end());

    
    print(vec);
    cout<<"\n\n\n";
    vec.clear();  
    print(vec);
    */

    /*  2d vector
    int n,m;
    cin>>n>>m;
    vector<vector<int> >v2d(n,vector<int>(m,6));
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<v2d[i][j]<<" ";
    //     }cout<<"\n";
    // }
    
    v2d.push_back(vector<int>(m,7));
    v2d[1].push_back(9);

    for(auto row:v2d){
        for(auto col:row){
            cout<<col<<" ";
        }cout<<"\n";
    }
    */


    /* SOME STRINGS 
    
    string txt = "hi mohamed ahmed zidan";
    int f1 = txt.find(" ",0);
    cout<<f1<<"\n";
    
    int f2 = txt.find(" ",f1+1);
    cout<<f2<<"\n";
    
    int f3 = txt.find(" ",f2+1);
    cout<<f3<<"\n";

    cout<<"\nsearch\n";
    
    string w1 = txt.substr(0,f1);
    cout<<w1<<"|\n";
    
    string w2 = txt.substr(f1+1,f2-f1-1);
    cout<<w2<<"|\n";
    
    string w3 = txt.substr(f2+1,f3-f2-1);
    cout<<w3<<"|\n";
    
    
    string w4 = txt.substr(f3+1);
    cout<<w4<<"|\n";
    

    */
    return 0;
}
