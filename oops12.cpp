#include <iostream>
#include<string>

using namespace std;

class parent{
    public:
    void getinfo(){
        cout<<"parent class";
    }

    virtual void hello(){
        cout<<"Hello parent";
    }
};

class child: public parent{
    public:
    void getinfo(){
        cout<<"child class";
    }

    void hello(){
        cout<<"hello child";
    }
};

int main(){

    child c1;
    c1.hello();

return 0;
}