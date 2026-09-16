#include <iostream>
#include<string>

using namespace std;

class student{
    public:
    string name;
    int rollno;
};

class teacher{
    public:
    string subject;
    int salary;
};

class both: public student, public teacher{

};
int main(){

    both b1;
    b1.name="s";
    b1.subject="CTP";

    cout<<b1.name<<endl<<b1.subject<<endl;


return 0;
}