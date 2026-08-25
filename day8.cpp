#include <iostream>
using namespace std;

int product(int a, int b){
    static int c=0;
    c = c+1;
    return a*b+c;
}
int main(){
    int a, b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    
return 0;
}

//inline function , when we use a function so many time then it make too hard that it first take values and give to product then to different different cout agaiun and againb
// for this we use inline function , we oonly have to use inline func. then there is very less operation like in upper int only a*b
//static function , if we want to other operation in next output then first