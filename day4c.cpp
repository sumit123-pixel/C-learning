#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"happy"<<endl;
        break;
    case 14:    
        cout<<"ok"<<endl;
        break;
    
    default:
    cout<<"sad";
        break;
    }
    return 0;
}