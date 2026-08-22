#include <iostream>
using namespace std;

int main(){
//What is pointers? -----> Dta types which holds address of other data types
int a=1;
int* b=&a;
//or
//int* b;
//b=&a;

cout<<"the adress of a is:"<<&a<<endl;
cout<<"the adress of b is:"<<b<<endl;

cout<<"the value at adress of b is: "<<*b<<endl;
return 0;
}

// & ----> (Address of) operator
// * ----> (value at) derefrence operator
