//Product ,Item, Cart
#include<string>
using namespace std;

//forward declaration
class Item; 
class Cart;
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
  friend class Item;
};


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
};

class Cart{

};

