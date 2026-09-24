#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
    
public:
      void setdata(int a, int b){
        this->a=a;
        this->b=b;
      }
      void printdata(void){
        cout<<"the conmplexc no. is "<<a<<"+"<<b<<"i"<<endl;
      }
};

int main(){

complex c1;
c1.setdata(1,2);
c1.printdata();

return 0;
}