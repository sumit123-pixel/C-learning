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

class Gradstudent : public student{
    public:
    string researcharea;
};

int main(){
    Gradstudent gs1;
    gs1.name="sumit";
    gs1.age=18;
    gs1.rollno=19;
    gs1.researcharea="AI";

    cout<<gs1.name<<endl<<gs1.age<<endl<<gs1.rollno<<endl<<gs1.researcharea;

return 0;
}