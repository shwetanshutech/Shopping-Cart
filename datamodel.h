//Product ,Item, Cart

#include<bits/stdc++.h>
using namespace std;

//forward declaration
class Item; 
class Cart;

//Product Class
class Product{
  int id;
  string name;
  int price;

  public:
   Product(int u_id,string name,int price){
          id=u_id;
         this->price=price;
         this->name=name;
   }

   string getDisplayName(){
   	return name+" : Rs "+ to_string(price)+'\n';
   }

   string getDisplaywithID(){
    return to_string(id)+". "+name+" : Rs "+ to_string(price)+'\n';
   }
   int getIdentity(){
    return id;
   }
  friend class Item;
};

//Item Class
class Item{
     Product product;
     int quantity;
 public:
    //Constructor using a intiliasation list
     Item(Product p, int q):product(p),quantity(q){}
    int getPrice(){
        return quantity*product.price;
    }

    string getItemInfo(){
        return to_string(quantity)+ " x "+product.name+" = "+"Rs "+to_string(quantity*product.price);
    }
    friend class Cart;
};

class Cart{
 unordered_map<int,Item> items;
public:
    void addProduct(Product product){
        if(items.count(product.getIdentity()==0)){
            Item newItem(product,1);
            items[product.getIdentity()]=newItem;
        }
        else{
            items[product.getIdentity()].quantity+=1;
        }
    }

    int getTotal(){
        int total=0;
        for(auto itemPair: items){
            auto item=itemPair.second;
            total+=item.getPrice();
        }
        return total;
    }
    string viewCart(){
        if(items.empty()){
            return "Cart is Empty";
        }
        string itemizedList;
        int cart_total=getTotal();
        for(auto itemPair: items){
            auto item=itemPair.second;
            itemizedList.append(item.getItemInfo());
        }
        return itemizedList+ "\nTotal Amount: Rs. "+to_string(cart_total)+"\n";
    }

    bool isEmpty(){
        return items.empty();
    }

};

