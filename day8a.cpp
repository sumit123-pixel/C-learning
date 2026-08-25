#include <iostream>
using namespace std;

//default argument 

float moneyreciever(int currentmoney , float factor= 1.04){
    return currentmoney*factor;
}
int main(){
    int money = 100000;
cout<<"if you have "<<money<< "Rs in your bank then you get"<<moneyreciever(money)<<"after 1 year"<<endl;
cout<<"for VIP: if they have"<<money<<"Rs in your nak then you get"<<moneyreciever(money, 1.1)<<"after 1 year";
return 0;
}

//default argument--------> in first cout we dont have default value then we use flat factor value but in 2nd cout we have default so we use this

