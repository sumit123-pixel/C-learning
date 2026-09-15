#include <iostream>
#include<string>

using namespace std;

class person{
    public:
    string name;
    int age;

person(string name, int age){
    this->name= name;
    this->age=age;
}
};

class student: public person {
   public:
    int rollno;

    student(string name, int age, int rollno): person(name, age){
        this->rollno=rollno;
    }

    void info(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll no.:"<<rollno<<endl;
    }
};

int main(){
    student s1("sumit", 18, 19);
    s1.info();

return 0;
}
