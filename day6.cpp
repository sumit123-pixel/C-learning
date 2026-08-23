#include <iostream>
using namespace std;

int main(){
// Arrays un C++

int marks[5] = {12, 16, 19, 20, 17};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<marks[4]<<endl;

//or

int math[4];
math[0]=12;
math[1]=15;
math[3]=17;
math[2]=18;

cout<<"These are math marks"<<endl;

cout<<math[0]<<endl;
math[1]=13;
cout<<math[1]<<endl;
cout<<math[2]<<endl;
cout<<math[3]<<endl;

//for loop in array

for(int i=0; i<5; i++){
    cout<<"the value of marks"<<i<<"is:"<<marks[i]<<endl;
}

//pointers and arrays

int* p= marks;
cout<<"The value of marks[0] is:"<<*p<<endl;
cout<<"The value of marks[1] is:"<<(*p+1)<<endl;
cout<<"The value of marks[2] is:"<<(*p+2)<<endl;

cout<<*p++<<endl;  // by this now it make print *p and now it is pointed to the *p+1
cout<<++*p<<endl;  
return 0;
}

// we can also change the value in arrays before writing the chganged value before cout  

