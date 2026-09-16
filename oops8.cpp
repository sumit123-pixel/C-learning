#include <iostream>
#include<string>

using namespace std;

class person{
    public:
    string name;
    int age;
};

class student:public person{
 public:
    string subject;
};

class teacher: public person{
public:
double salary;
};

int main(){
student s1;
teacher t1;
s1.name="Sumit";
t1.name="shipra";

cout<<s1.name<<endl<<t1.name<<endl;
return 0;
}