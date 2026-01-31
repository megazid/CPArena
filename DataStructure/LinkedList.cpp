#include<iostream>

using namespace std;

// class Node
// {
//     public:
//         int data;
//         Node *next;
//         Node(){
//             data = 0;
//             next = NULL;
//         }

// };

// class Linkedlist
// {
//     public:
//         Node *head;
//         Linkedlist(){
//             head = NULL;
//         }
// };

struct empl{
    string name;
    int salary;
    int bonus;
    int deduction;
};


int main(){
    empl emp[4];
    for(int i=0;i<4;i++){
        cin>>emp[i].name>>emp[i].salary>>emp[i].bonus>>emp[i].deduction;
    }

    for(int i=0;i<4;i++){
        emp[i].salary = emp[i].salary + emp[i].bonus - emp[i].deduction ;
        cout<<emp[i].name<<" salary = "<<emp[i].salary<<"\n";0
    }
    return 0;
}