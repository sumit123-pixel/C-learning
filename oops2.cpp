#include <iostream>
#include<string>

using namespace std;

class student{
    public:
string name;
int Rollno;

student(string name,int Rollno){
 this->name=name;
 this->Rollno=Rollno;
}

void info(){
    cout<<"Name:"<<name<<endl;
    cout<<"Rollno:"<<Rollno<<endl;
}
};

int main(){
student s1("sumit", 123);
s1.info();

student s2(s1);
s2.info();
return 0;
}