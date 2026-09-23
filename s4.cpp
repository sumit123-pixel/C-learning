#include <iostream>
using namespace std;

class student {
    int id;
    static int count; //static data memberis a class-level variable that is shared by all instances (objects) of that class, rather than being duplicated for each individual object. 

    public:
    void setdata(void){
        cout<<"Enter the id of no."<<count+1<<" is:"<<endl; // for this write void in place of int id in setdata
        
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"id is:"<<id<<endl;
    }

    static void getcount(void){
        cout<<"The count is:"<<count<<endl;
    }
};

int student:: count;

int main(){

    student sumit, rohit;
    sumit.setdata();
    sumit.getdata();
    sumit.getcount(); //or student::getcount();

    rohit.setdata();
    rohit.getdata();
    rohit.getcount();



return 0;
}