#include<iostream>
#include<vector>
#include "datamodel.h"
using namespace std;

vector<Product> allProducts={
  Product(1,"Mouse",200),
  Product(2,"KeyBoard",900),
  Product(3,"PenDrive",500),
  Product(4,"Bluetooth",900),
  Product(6,"Earphone",750),
  Product(5,"Camera",1200),
};
signed main(){
    int action;
    cout << "===================================\n" ;
    cout <<"Welcome to Digit Store"<<"\n\n";
    while(true){
       cout<<"Select a service by entering correct service number => \n 1.Add Item \n 2.View Cart \n 3.Checkout \n ";
       cin>>action;
    }

    return 0;
}