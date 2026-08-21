#include<iostream>

using namespace std;

int main(){
    //selection control structure: if-else ladder
    int age;
 
 cout<<"what's your age:"<<endl;
 cin>>age;

 if((age<18) && (age>0)){
    cout<<"you are not eligible";
 }

 else if(age==18){
    cout<<"you are eligible but with some conditions";
 }

 else {
    cout<<"you are absoluotly eligible";
 }
    return 0;
}