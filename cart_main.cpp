#include<iostream>
#include<vector>
#include "datamodel.h"
using namespace std;

vector<Product> allProducts={
  Product(1,"Mouse",200),
  Product(2,"KeyBoard",900),
  Product(3,"PenDrive",500),
  Product(4,"Bluetooth",900),
  Product(5,"Earphone",750),
  Product(6,"Camera",1200),
};

Product* chooseProduct(){
    string productlist="";
    cout<<"-------------------------------\n";
    cout<<"Avaiable Products \n\n";
    for(auto product:allProducts){
        productlist.append(product.getDisplaywithID());
    }
    cout<<productlist<<endl;
   cout<<"-------------------------------\n";
   cout<<"Enter Serial Number to add product to the Cart=> ";
    int choice;
    cin>>choice;
    for(int i=0;i<allProducts.size();i++){
        if(allProducts[i].getShortName()==choice){
            return &allProducts[i];
        }
    }
    cout<<"Product Not Found"<<endl;
    return NULL;

}
signed main(){
    int action;
    cout << "===================================\n" ;
    cout <<"Welcome to Digit Store"<<"\n\n";
    while(true){
       cout<<"Select a service by entering correct service number => \n 1.Add Item \n 2.View Cart \n 3.Checkout \n ";
       cin>>action;
       if(action==1){
        //Add to cart
        //View All Items + Choose a product + Add to the cart
        Product *product =chooseProduct();
        if(product!=NULL){
            cout<<"Added to the cart => "<<product->getDisplayName()<<'\n';
        }
    }
    else if(action==2){
        //View Cart
    }
    else{
        //Checkout
    }
    }
    
    return 0;
}