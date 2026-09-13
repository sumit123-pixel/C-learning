#include<iostream>

using namespace std;

int main(){
   int age;

   cout<<"What's your age:"<<endl;
   cin>>age;

   switch(age)
   {
      case 18:{
         cout<<"you are 18"<<endl;
         break;
      }

      case 12:{
         cout<<"you are 12"<<endl;
         break;
      }

      default:{
         cout<<"unspecified"<<endl;
         break;
      }
   }
   return 0;
}