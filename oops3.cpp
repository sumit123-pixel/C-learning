#include <iostream>
#include<string>

using namespace std;

class student{
    public:
    string name;
    int* ptrage;

    //constructor
    student(string name, int age){
      this->name=name;
      ptrage = new int;  // we write this line because we want to allocate memory for the age variable in the heap memory. and we use new keyword to allocate memory in the heap memory. and we use delete keyword to deallocate memory from the heap memory.
      *ptrage=age;
    }

    //destructor
    ~student(){
        delete ptrage;
        cout<<"I delete everything";
    }

    void info(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<*ptrage<<endl;
    }

};

int main(){
student s1("sumit", 18);
s1.info();


return 0;
}