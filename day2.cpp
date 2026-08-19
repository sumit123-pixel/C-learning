#include<iostream>
using namespace std;

int d = 5;

int main(){
    int a= 1;
    int b=2;

   cout<<"hello world\nhere the value of a is: "<<a<<"\nhere the value of b is:"<<b;

   //here we use <<a<< and <<b<< just after the the "here the value of"
   // printing the value just after them
   // we can also write as int a=1, b=2

   float pi=3.14;
   char c='s';

   //we only have to write only one letter in the char variable

   cout<<"\nthe value of pi is:"<<pi;
   cout<<"\nHere the value of c is:"<<c;
   cout<<"\nHere the value of d is:"<<d;

   bool e = true, f = false;

   cout<<e<<f;

    return 0;
}

// the varibale outside the main function is called global variable and the variable inside the main function is called local variable
//if we have same varibale name in both the local and global variable then the local variable will be given preference over the global variable
//if value of bool is true then it will print 1 and if the value of bool is false then it will print 0
