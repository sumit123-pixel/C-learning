#include <iostream>
using namespace std;

 class student{
    int id;
    int salary;

    public:
    void setid(void){
       salary=10000;   // i bset id of ecey studenbt by write like this in setid 
     cout<<"Enter id of student:"<<endl;
        cin>>id;
    }

    void getid(void){
        cout<<"Id of student is:"<<id<<endl;
        cout<<"Salary of the student is:"<<salary<<endl;
    }
 };

int main(){

    // student sumit, kartik, anshul, dhanesh;     aisa jab karte h tbhamare pas student kam ho pr agar students jyanda ho to array banayenge
    // sumit.setid();
    // sumit.getid();

    student fb[4];
    // fb[0].setid();
    // fb[0].getid();

    for(int i=0; i<4; i++){
        fb[i].setid();
        fb[i].getid();
    }

return 0;
}