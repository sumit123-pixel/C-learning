#include<iostream>

using namespace std;

int c=8;

int main(){
int a, b, c;

    cout<<"hello world, this is day 3 of c++ programming"<<endl;

    cout<<"The value of a is:";
    cin>>a;

    cout<<"The value of b is:";
    cin>>b;
    c=a+b;
    cout<<"The sum is:"<<c<<endl;

    cout<<"The global c is:"<<::c<<endl;

    float d=12.2f;
    long double e=12.2l;

    cout<<"The value of d is:"<<d<<endl;
    cout<<"The value of e is:"<<e<<endl;

     
    return 0;
}

//we use c both globally and locally and if we write direct cout then it give priority to local but when we use '::', just like in code then it gives result

//if we use same value in both float and long double then it will be same value but when we ask it that what is
//is 12.2 then acc. to it is a double thats why we add f ain float and l in long double for differrerntiate
