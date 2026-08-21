#include<iostream>

using namespace std;

int main(){
    int a=5;
    cout<<"The value of a was:"<<a<<endl;
    a=7;
    cout<<"The value of a is:"<<a<<endl;

   const int b=2;
  // b=3; //this will show error because we cannot change the value of constant variable
  cout<<"The value of b is:"<<b<<endl;


return 0;
}

//we can change value of varbale in c++ like above and if we use const  keyword then the value is constant and then it show error if we change value
