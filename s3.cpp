#include <iostream>
using namespace std;

class shop {
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
    void initcounter(void){counter=1;}
    void setprice(void);
    void getprice(void);
};

void shop :: setprice(void){
cout<<"Enter item id of no."<<counter<<endl;
cin>>itemid[counter];

cout<<"Enter item price:"<<endl;
cin>>itemprice[counter];
counter++;
}

void shop :: getprice(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"the price of item with id "<<itemid[i]<<"is"<<itemprice[i]<<endl;
    }
    
}

int main(){
shop dukaan;
dukaan.initcounter();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.getprice();
return 0;
}