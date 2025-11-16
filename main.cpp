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


void ans(string word){
    string temp = "";
    bool done = false;
    for(int i=0;i<word.size()-1;i++){   
        if(word[i]!=word[i+1]){
            temp+=word[i];
            cout<<word.size()-2<<"\n";
            if(i==word.size()-2)temp+=word[i+1];
        }
        else{
            i++;
            done = true;
        }
    }
    for(char c:temp)cout<<c;

}

int main(){
    init();

    string s;cin>>s;
    ans(s);


    return 0;

}