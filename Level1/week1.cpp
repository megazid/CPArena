/*
    level 1 - week 1
    frequency array
    prefix sum

    partial sum

    struct
    pair
    vector

    sort
    lambada [](paramters){body}
*/




#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}


/* Frequency Array  Usages
-- counting 
-- quires and finds 
*/
void freq(){
    int n;
    cin>>n;
    vector<int>
}


// struct person{
//     string name;
//     int age;
//     bool active;
// };


// bool preceed1(int x,int y){
//     return x > y;
// }

// bool preceed2(int x,int y){
//     return x < y;
// }


// bool preceed3(int x,int y){
//     return abs(x) < abs(y);
// }

// bool sorted(vector<pair<int,int>> x,vector<pair<int,int>> y){
//     return x.second > y.second;
// }

// bool sorted(int x,int y){
//     return x > y;
// }



// struct item{
//     int weight,value;
// };


// bool sorted(item a,item b){
//     return a.value > b.value;
// }

// void knapsack(){

//     int w[] =  {6,10,3,5,7,3};
//     int v[] =  {6,2,1,8,3,5};
//     int n = sizeof(w)/sizeof(w[0]);

//     // item items[n];
//     // loop(n){
//     //     items[i].weight = w[i];
//     //     items[i].value = v[i];
//     // }

//     //using pairs;
    
    
//     vector<pair<int,int>> items;
//     loop(n){
//         items[i].first = w[i];
//         items[i].second = v[i];
//     }
    


//     int bagsize = 20;
//     int total =0;

//     loop(n){
//         cout<<items[i].first<<" "<<items[i].second<<"\n";
//     }

//     // sort(items,items+n,sorted);


//     loop(n){
//         if(items[i].first>=bagsize){
//             total += (bagsize*items[i].second);
//             bagsize = 0;
//             break;
//         }
//         else{
//             total += (items[i].second*items[i].first);
//             bagsize -= items[i].first;
//         }
//     }
//     // return total;
    
//     // loop(n)cout<<items[i].weight<<" "<<items[i].value<<"\n";
//     // cout<<"\n\\\\\\\\\\\\\\\n";


//     // vector<int> item(n);
//     // loop(n)item[i]=w[i];
//     // loop(n)cout<<item[i]<<" ";
//     // cout<<"\n//////////////\n";


//     // sort(item.begin(),item.rbegin());
//     // loop(n)cout<<w[i]<<" ";

//     // vector<pair<int,int>> items(n);
//     // for(int i=0;i<n;i++){
//     //     items[i].first = w[i];
//     //     items[i].second = v[i];
//     // }

//     // for(int i=0;i<n;i++)cout<<items[i].first<<" "<<items[i].second<<"\n";

//     // sort(items.begin,items.begin+n,sorted);
//     // for(int i=0;i<n;i++)cout<<items[i].first<<" "<<items[i].second<<"\n";
    
//     /*
//     w = 6 10 3 5 7 3 
//     v = 6 2 1 8 3 5
//     // after sorting
//     w = 5 6 3 7 10 3
//     v = 8 6 5 3 2 1
//     how doing that ??? IDK
//     */
// }
bool sorted(pair<int,int> a,pair<int,int> b){
    return a.second <  b.second;
}

int bypair(){
    int w[] =  {6,10,3,5,7,3};
    int v[] =  {6,2,1,8,3,5};
    int n = sizeof(w)/sizeof(w[0]);


    vector<pair<int,int>> items(n);
    loop(n){
        items[i].first = w[i];
        items[i].second = v[i];
    }

    // loop(n){
    //     cout<<items[i].first<<" "<<items[i].second<<"\n";
    // }


    int bagsize = 20;
    int total =0;

    sort(items.rbegin(),items.rend(),sorted);
    // sort(items,items+n,sorted);


    loop(n){
        if(items[i].first>=bagsize){
            total += (bagsize*items[i].second);
            bagsize = 0;
            break;
        }
        else{
            total += (items[i].second*items[i].first);
            bagsize -= items[i].first;
        }
    }
    return total;
}

int main() {


    auto printPair = [](pair<int,int> p){
        cout << p.first << " " << p.second << "\n";
    };

    printPair({5, 10});



    // cout<<bypair()<<"\n";
    return 0;
    // init();
    
    // struct
    // person p1;
    // cin>>p1.name>>p1.age;
    // p1.active = true;
    // cout<<p1.name<<" "<<p1.age<<" "<<p1.active<<"\n";   

    /* PAIR
    pair<int,int> p;
    p.first
    p.second
    pair<string,pair<int,int>> monster
    */

    // pair<string,pair<int,int>> monster;
    // cin>>monster.first>>monster.second.first>>monster.second.second;
    // cout<<"monster name is "<<monster.first<<"\n";
    // cout<<"monster attack = "<<monster.second.first<<" monster defense = "<<monster.second.second<<"\n";

    /* vector 
    vector main functions
    v.begin() //first element
    v.rebin() //last element
    v.size()
    v.resize(n)
    v.push_back(x)
    v.pop_back()
    v.clear()
    v.empty()
    v.erase(v.begin()+3) erase element wiht pos 3          // all * pointers 
    v.erase(v.begin()+1 , v.begin() + 5) erase element range (1, 5
    

    // 2d vector
    vector<vector<int>> matrix;
    vector<pair<int,int>>
    vector<pair<pair<int,int>,int>>
    */

    // vector<int> v;
    // while (true)
    // {
    //     int x;cin>>x;
    //     if(x==-1)break;
    //     v.push_back(x);
    // }



    // is there another way to input a matrix vector???? "serach don't forget"
    // vector<vector<int>> matrix(5,vector<int>(3));
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>matrix[i][j];
    //     }
    // }


    // for(int i=0;i<5;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<matrix[i][j];
    //     }
    // }


    /*SORTING
    sort(arr,arr+n);
    by default low > high a  < b
    so we use sort(arr,arr+n,sorted) sortd is a function return a > b ..

    */

    // int a[] = {2,7,-3,10,-2,14,-99};
    // int n = sizeof(a)/sizeof(a[0]);
    // // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    // cout<<"\n***OUTPUT***\n";

    // sort(a,a+n,preceed1);
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    // cout<<"\n******\n";

    // sort(a,a+n,preceed2);
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    // cout<<"\n******\n";

    // sort(a,a+n,preceed3);
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    // cout<<"\n******\n";

    /// we can use arrow function 


}
