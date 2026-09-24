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
      void setbysumdata(complex o1, complex o2){
        a= o1.a + o2.a ;
        b= o1.b + o2.b ;
      }
      void printdata(void){
        cout<<"the complex no. is "<<a<<"+"<<b<<"i"<<endl;
      }
};

int main(){

complex c1, c2, c3;
c1.setdata(1,2);
c1.printdata();

c2.setdata(3,4);
c2.printdata();

c3.setbysumdata(c1, c2);
c3.printdata();

return 0;
}