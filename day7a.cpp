#include <iostream>
using namespace std;

int sum(int a , int b){
    int c=a+b;
    return c;
}

//this will not swap a and b
// void swap(int a , int b){//temp  a  b
// int temp=a;              //4     4  5
// int a=b;                 //4     5  5
// int b=temp;              //4     5  4
// }

// call by reference using pointers
void swappointer(int* a, int* b){
    int temp=*a;
    *a=*b;
     *b=temp;
}

int main(){
    int x=4, y=5;
   cout<<"the sum of 4 and 5 is:"<<sum(x, y)<<endl;
  // swap(x, y); //this will not swap a and b

swappointer(&x, &y);
   cout<<"value of x is"<<x<<"and value of y is"<<y;

return 0;
}