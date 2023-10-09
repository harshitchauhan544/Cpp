#include<iostream>
using namespace std;

class shop{
    int itemid[10];
    int itemprice[10];
    int counter=0;
    public:
        // void initcounter(){ counter =0;}
        void setprice(void);
        void displayprice(void);
};

void shop::setprice(void){
    cout<<"Enter id of your item no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price of your item :"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The item with id "<<itemid[i]<<" is priced "<<itemprice[i]<<endl;
    }
    
}

int main(){
    shop dukaan;
    // dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}