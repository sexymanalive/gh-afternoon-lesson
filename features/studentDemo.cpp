#include<iostream> 
using namespace std; 
class Student {
    private: 
        string name; 
        int age ; 
    public: 
        Student(string n , int a) : name(n), age(a) {}
}; 
int main(){
    cout<<"Hello this is the student demo file."<<endl;
    cout<<"This file is used to demonstrate the student feature."<<endl;
    cout<<endl; 
    return 0; 
}