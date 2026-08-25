#include <iostream>
using namespace std;

//Recursion and Recursive function----->factorial in c++
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter the value:"<<endl;
    cin>>a;
    cout<<"\nThe factorial of"<<a<<"is:"<<factorial(a);


return 0;
}