#include <iostream>
using namespace std;

int add(int a, int b){
    cout<<"Using fn. with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using fn. with 3 arguments"<<endl;
    return a+b+c;
}

//calculate volue of cylinder
float volume(double r, int h){
 return (3.14*r*r*h);
}

//calculate the volume of cube
int volume(int a){
    return (a*a*a);
}

int main(){

    cout<<"The sum of 3 and 5 is:"<<add(3,5)<<endl;
    cout<<"The sum of 2, 5 and 3 is:"<<add(2,5,3)<<endl;
    cout<<"The volume of a cyliner is:"<<volume(5, 3)<<endl;
    cout<<"The volume of cube is:"<<volume(4)<<endl;

return 0;
}