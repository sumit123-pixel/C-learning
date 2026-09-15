#include <iostream>
#include<string>

using namespace std;

//Inheritence is a mechanism in C++ that allows a class to inherit properties and behaviors from another class. The class that inherits is called the derived class, and the class being inherited from is called the base class. Inheritance allows for code reusability and the creation of hierarchical relationships between classes.

class person{
    public:
    string name;
    int age;

    //constructor
    person(){
        cout<<"Parent class constructor called"<<endl;
    }
};

class student: public person {
    public:
    int rollno;

    student() {
        cout<<"Child class constructor called"<<endl;
    }

    void info(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno.:"<<rollno<<endl;
    }
};

int main(){

student s1;
s1.name="sumit";
s1.age=18;
s1.rollno=123;

cout<<s1.name<<endl;
cout<<s1.age<<endl;
cout<<s1.rollno<<endl;

return 0;
}