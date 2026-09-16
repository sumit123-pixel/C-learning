#include <iostream>
#include<string>

using namespace std;

class person{
    public:
    string name;
    int age;
};

class student: public person{
    public:
    int rollno;
};

class teacher: public person{
    public:
    int salary;
};

class gradstudent: public student{
    public:
    string researcharea;
};

class both: public student, public teacher{
    public:
    string city;
};
int main(){

    both b1;
    gradstudent g1;

    b1.student::name="sumit";
    b1.teacher::name="shipra";
    g1.age=18;

    
    cout<<g1.age<<endl<<b1.student::name<<endl<<b1.teacher::name<<endl;
    

return 0;
}