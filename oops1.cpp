#include <iostream>
#include<string>

using namespace std;

class teacher{

    private:
       double salary;

    public:
    //properties or attributes
    string name;
    string subject;
    string department;

//non-parameterized constructor is a constructor that does not take any arguments. It is used to initialize the object with default values.
    teacher(){
        cout<<"constructor called"<<endl;
    }  // this is a constructor, it is a special member function that is automatically called when an object of the class is created. It is used to initialize the object.

    
    // this is a parameterized constructor, it is a special member function that is automatically called when an object of the class is created. It is used to initialize the object with the values passed as arguments.
    teacher(string name, string subject, string department, double salary){  
        this->department = department;
        this->salary = salary;
        this->name = name;
        this->subject = subject; 
    //this keyword is used to refer to the current object of the class. It is used to access the members of the class. and it is used to differentiate between the member variables and the local variables with the same name.
    }

    //copy constructor is a constructor that is used to create a new object as a copy of an existing object. It is used to initialize the object with the values of another object of the same class.
teacher(teacher &t){
    this->subject=t.subject;
}
    //methods or member functions
    void changedepartment(string newdepartment){
        department = newdepartment;
    }

    //setter
    void setsalary(double s){
        salary = s;
    }

    //getter
    double getsalary(){
        return salary;
    }

    void getInfo(){
     cout<<"name:"<<name<<endl;
    cout<<"Subject:"<<subject<<endl;
    }


};

class account{
    private:
    string password;
    float balance; //data hiding

    public:
    string AccountID;
    string Username;

};
int main(){

    teacher t1; // when we create an object of class teacher, the constructor is called automatically to initialize the object
    t1.name = "sumit";
    t1.subject = "maths";
    t1.department = "cs";
    //t1.salary = 100000;  salary is private so we can't access it outside the class
    t1.setsalary(240000);
    

    teacher t2("kalu", "maths", "ME", 200000); // parameterized constructor is called automatically to initialize the object with the values passed as arguments,

    t2.getInfo();

    teacher t3(t2); // copy constructor is called automatically to initialize the object with the values of another object of the same class.
    t3.getInfo();

    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;
    cout<<t2.name<<endl;


return 0;
}