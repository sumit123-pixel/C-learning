#include <iostream>
using namespace std;

//function prototype
//syntax: type function-name(argument);
//int sum(int a, b); ----> not acceptable
//int sum(int, int); ----> acceptable
int sum(int a, int b); //----->acceptable

void g();
//or
// void g(void);

int main(){
    int num1, num2;
    cout<<"enter the value of num1:"<<endl;
    cin>>num1;
    cout<<"enter the value of num2:"<<endl;
    cin>>num2;

    cout<<"the sum is:"<<sum(num1, num2)<<endl;
    //num1 and num2 are actual parameters

    g();

return 0;
}

int sum(int a, int b){
    //formal parameters a and b are not actual parameters , they just take values from actual parameters
    int c=a+b;
    return c;
}

void g(){
    cout<<"good morning";
    
}

// if we put int sum below the int main then code does not recognize sum and give error
//for recognizing the sum be use function prototye , which is used above