#include <iostream>
using namespace std;

int main(){
           struct Students
           {
            /* data */
            int Rollnumber;
            char favsubject;
            int marks;
           };
           
    struct Students sumit;
    sumit.Rollnumber = 14;
    sumit.favsubject = 'a';
    sumit.marks = 89;

    cout<<"The roll number is:"<<sumit.Rollnumber<<endl;
    cout<<"The fav. subject is:"<<sumit.favsubject<<endl;
    cout<<"The marks in physics is:"<<sumit.marks<<endl;

    union s1   // in union we can only use one of them
    {
        /* data */
        int a;
        float b;
        char c;

    };
    union s1 kuchbhi;
     kuchbhi.a = 1;
     kuchbhi.b = 1.3;
     kuchbhi.c = 'd';

     cout<<"the value ofkuchbhi.a is:"<<kuchbhi.a<<endl;

     enum Meal {breakfast, lunch, dinner};
     cout<<breakfast;
     cout<<dinner;
     cout<<lunch;

     Meal m1= breakfast;
     cout<<m1;
return 0;
}

// typedef struct Students
//            {
//             /* data */
//             int Rollnumber;
//             char favsubject;
//             int marks;
//            } sk;     on writing like this we can write sk insteads of whole srtuct sumit