#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
    void setdata(int a, int b){
        this->a=a;
        this->b=b;
    }
    friend complex sumdata(complex o1, complex o2);
    void printdata(void){
        cout<<"The complex no. is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumdata(complex o1, complex o2){
    complex o3;
    o3.setdata(o1.a + o2.a, o1.b + o2.b);     // hum complex me freiend function banyenge nhi to compliler rone lg jayenga, compiler ko batan padega ki sumdata mera dost h, a and b private h isliye royega
   return o3;
};

int main(){

    complex c1, c2, sum;
    c1.setdata(1,3);
    c1.printdata();

    c2.setdata(5,2);
    c2.printdata();
    
    sum= sumdata(c1, c2);
    sum.printdata();
return 0;
}

/*
properties of friend function
1. not in scope of class:- ye class ka part nhi hota h bss ye class
 ke private data ko access krr rha h
2. since it is not in the class , it cannot be called from the
 object  like c1.sumdata()== invalid.
 3. can be invoked without the help of object.
 4. usually contains the arguments as object.
 5. hum friend function ko public or private kisi me bhi like skte h 
 isse kuh farak nui pdta
  */