#include <iostream>
using namespace std;

const int maximum = 100;

class customer {

private :
  string customerName;
  string address;
  int phone;

public:    
   int customerID;
   customer() {
      customerID = 0;
  }
   customer(int id, string name, string add) {
   customerID = id;
   customerName = name;
   address = add;
}
void addCustomer(customer cus[],customer c) {
      for (int i = 0; i < maximum; ++i) {
            if (cus[i].customerID == 0) {
                     cus[i] = c;
             }
        }
}
void editCustomer() {
    cout << "What you want to change?\nAnswer : ";
    string item;
    cin >> item;
    if (item == "name") {
    string name;
    cout << "Enter name : ";
    cin >> name;
    customerName = name;
    }
    else if (item == "address") {
    string add;
    cout << "Enter address : ";
    cin >> add;
    address = add;
    }
    else if (item == "phone") {
    int phone;
    cout << "Enter phonenumber : ";
    cin >> phone;
    this->phone = phone;
    }
}
   void deleteCustomer(customer cus[],int i) {
        cus[i].customerID = 0;
      }
};

class order {

private:
     int customerID;
     string customerName;
     int productID;
     float amount;
     int orderDate;

public:
    int orderID;
     order() {
     orderID = 0;
     }
    order(int oid, int cid, string cname, int pid, float am, int od) {
    orderID = oid;
    customerID = cid;
    customerName = cname;
    productID = pid;
    amount = am;
    orderDate = od;
    }
   void createOrder(order arr1[],order o) {
      for (int i = 0; i < maximum; ++i) {
      if (arr1[i].orderID == 0)
      arr1[i] = o;
      }
    }
};

class product {

	  public :
	       float productPrice;
		   string productType;
	       order o[100];
	       int productID;
	       product () {
	           productID = 0;
	       }
	       product (int p, string ty,int id) {
	           productPrice = p;
	           productType = ty;
	           productID = id;
	       }
	       void addProduct (product arr2[],product p) {
	           for (int i=0;i<maximum;++i) {
	               if (arr2[i].productID == 0) {
	                   arr2[i] = p;
	               }
	           }
	       }
	  void modifyProduct (product arr2[],int i) {
	      cout <<"Modify : price/type/id" << endl;
	      string s;
	      cin>>s;
	      if (s=="price") {
	          cout << "Enter new price : ";
	          int p;
	          cin >> p;
	          arr2[i].productPrice = p;
	          
	      }
	  }
};
class stock {
    
     private :
     int quantity;
     int shopno;
     public :
     int productID;
     stock (int q, int no, int id) {
         quantity = q;
         shopno = no;
         productID = id;
     }
     void addStock (stock arr[],stock s) {
          for (int i=0;i<maximum;++i) {
              if (arr[i].productID==0) {
                  arr[i]=s;
              }
          }
     }
     
};
	

int main () {
   
   customer c1(123,"Aywon", "Mirpur");
   order o1(132,456,"Pizza",987, 1, 10);
   product p1(200,"Food",123);
   stock s1(100,3,12345);
   
}
	


