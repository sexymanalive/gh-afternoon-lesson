#include<iostream>
using namespace std; 
// Adding the teacher class from what you suggested 
class Teacher {
    private: 
        string name; 
        int age ; 
    public: 
        Teacher (string n , int a ): name(n), age(a) {}
};
int main(){
    system("clear"); 
    cout<<"This is the teacher features "<<endl; 

    return 0; 
}