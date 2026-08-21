#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a=3, b=15, c=1288;
    cout<<"The value of a  without stw is:"<<a<<endl;
    cout<<"The value of b  without stw is:"<<b<<endl;
    cout<<"The value of c  without stw is:"<<c<<endl;

    //manipulators in c++

    cout<<"the value of a with setw is:"<<setw(5)<<a<<endl;
    cout<<"the value of b with setw is:"<<setw(5)<<b<<endl;
    cout<<"the value of c with setw is:"<<setw(5)<<c<<endl;

//operator precidence

int d=13, e=19;
int f= d*2+e-2;
cout<<f<<endl;    
    return 0;
}

//by adding setw() we can set the width of the output and it is used to align the output in a proper way. It is defined in <iomanip> header file.
// in operator precidence it goes from left to right
