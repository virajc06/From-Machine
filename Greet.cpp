#include<iostream>
using namespace std;

int main(){
    char name[30];
    int age;
    cout<<"Enter Your Name and Age : \n";
    cin>>name>>age;
    cout<<"Hello "<<name<<"\n";
    if (age>=18)
        cout<<"You can VOTE.";
    else
        cout<<"You cant Vote.";
    return 0;
}