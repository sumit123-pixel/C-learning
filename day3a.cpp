#include<iostream>

using namespace std;

int c=8;

int main(){
int a, b, c;
//built in data types are int, float, double, char, bool, void, long double, long long int, short int, unsigned int
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
//literal suffixes are used to specify the type of a literal constant. For example, 12.2f is a float literal, while 12.2l is a long double literal. If no suffix is provided, the literal is treated as a double by default.
    cout<<"The value of d is:"<<d<<endl;
    cout<<"The value of e is:"<<e<<endl;
    cout<<"The size of f is:"<<sizeof(12.2f)<<endl;
    cout<<"The size of e is:"<<sizeof(12.2l)<<endl;
    cout<<"The size of 12.2 is:"<<sizeof(12.2)<<endl;
    cout<<"The size of F:"<<sizeof(12.2F)<<endl;
    cout<<"The size of L is:"<<sizeof(12.2L)<<endl;

     //reference variable is used to give same name to another variable and it is created by using '&' operator

     float x=111;
     float& y=x;

     cout<<x<<endl;
     cout<<y<<endl;

     //typecasting is used to convert one variable type into another variable type and it is done by using '()' operator

     int z=12;
    //  cout<<"The value of z is :"<<z<<endl; this gives the normal result and it is in int for converting in float or in other variable we use () 

    cout<<"The value of z is :"<<(float)z<<endl;
    //or
    cout<<"The value of z is :"<<float(z)<<endl;

    float p=56.66;
    cout<<"the value of p is :"<<int(p)<<endl;

    //we can make like this also
    int q=int(p); 
    // by this we can convert float p into int q and store it in int variable
    cout<<"the value of q is:"<<q<<endl;

    cout<<z+p<<endl;
    cout<<z+int(p)<<endl;
    cout<<z+(int)p<<endl;
    

    return 0;
}

//we use c both globally and locally and if we write direct cout then it give priority to local but when we use '::', just like in code then it gives result

//if we use same value in both float and long double then it will be same value but when we ask it that what is
//is 12.2 then acc. to it is a double thats why we add f ain float and l in long double for differrerntiate
