#include <iostream>

using namespace std;

void swapreferencevar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4,y=5;
    swapreferencevar(x, y);
    cout<<"the value of x is"<<x<<"the value of y is"<<y;

return 0;
}