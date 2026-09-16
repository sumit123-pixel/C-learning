#include <iostream>
#include<string>

using namespace std;

class student{
    public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }

    void show(char ch){
        cout<<"char:"<<ch<<endl;
    }
};

int main(){
   student s1;
   s1.show('s');

   

return 0;
}