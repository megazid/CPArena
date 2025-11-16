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
    return 0;
}
