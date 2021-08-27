//Product ,Item, Cart
#include<string>
using namespace std;
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
   	return name+" :Rs "+ to_string(price)<<endl;
   }

};


class Item{

};

class Cart{

};

