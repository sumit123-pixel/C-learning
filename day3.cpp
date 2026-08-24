#include<iostream>

using namespace std;

int main(){
    
    int a=10 , b=5;

    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of header files in c++:"<<endl;
//arithmetic operators
    cout<<"Value of a+b is:"<<a+b<<endl;
    cout<<"Value of a-b is:"<<a-b<<endl;
    cout<<"Value of a*b is:"<<a*b<<endl;
    cout<<"Value of a/b is"<<a/b<<endl;
    cout<<"Value of a%b is:"<<a%b<<endl;
    cout<<"Value of b%a is:"<<b%a<<endl;
    cout<<"Value of a++ is:"<<a++<<endl;
    cout<<"Value of a-- is:"<<a--<<endl;
    cout<<"Value of ++a is:"<<++a<<endl;
    cout<<"Value of --a is:"<<--a<<endl;

    // assignment operators
    // int a=3 , b=4;
    // char c='s';

    //comparison operators ---------> for use of comnparison operator we ude brackets in cout

cout<<endl<<"Following are the comparison operators:"<<endl;
    cout<<"Value of a==b is:"<<(a==b)<<endl;
    cout<<"Value of a!=b is:"<<(a!=b)<<endl;
    cout<<"Value of a<b is:"<<(a<b)<<endl;
    cout<<"Value of a>b:"<<(a>b)<<endl;
    cout<<"Value of a<=b is:"<<(a<=b)<<endl;
    cout<<"Value of a>=b is:"<<(a>=b)<<endl;

    // logical operators

    cout<<endl<<"value of this logical and operator is:"<<((a==b) && (a<b))<<endl;
    cout<<"value of this logical or operator is:"<<((a==b) || (a<b))<<endl;
    cout<<"value of this logical not operator is:"<<(!(a==b))<<endl;
    


    return 0;
}
// on clicking ctrl + header file like iostream ,then it is opened in the new tab and it is called header file. Header file contains the declaration of functions and classes.
// there are two types of header files
//1. system header files: these are the header files which are provided by the compiler. example: iostream, cmath, cstdlib, etc.
//2. user defined header files: these are the header files which are created by the user. example: myheader.h, myheader.cpp, etc.

//for multiple cursors, press alt + mouse click and then you can write the same code in multiple places at the same time.

//for comparison operators if the condition is true then it will return 1 and if the condition is false then it will return 0.

//in logical and operator if both the conditions are true then it will return 1 otherwise it will return 0. In logical or operator if any one of the condition is true then it will return 1 otherwise it will return 0. In logical not operator if the condition is true then it will return 0 and if the condition is false then it will return 1.

//in logical or operator if only one of them is true then it is show 1 otherwise it will show 0. In logical not operator if the condition is true then it will return 0 and if the condition is false then it will return 1.

//in logical not operator if the condition is true then it will return 0 and if the condition is false then it will return 1.
