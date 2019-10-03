#include "iostream"
using namespace std;

class Product
{
        private:
                int pid;
                int price;
                int quantity;
        public:
                Product(){};    //TRY TO REMOVE THIS AND SEE WHAT HAPPENS
                Product(int,int,int);
                void getdata();
                class XYZ
                {
                        private:
                                int amountspent;
                        public:
                                void totalamount(Product productobj)
                                {
                                        amountspent=productobj.price*productobj.quantity;
                                        cout<<"Total amount spent on Product: "<<productobj.pid<<" is: "<<amountspent<<endl;
                                }
                };
};

Product::Product(int pid, int price, int quantity)
{
        this->pid=0;
        this->price=0;
        this->quantity=0;
}

void Product::getdata()
{
        cout<<"Enter product ID: ";
        cin>>pid;
        cout<<"Enter product price: ";
        cin>>price;
        cout<<"Enter product quatity: ";
        cin>>quantity;
}

int main()
{
        int no_of_products,i;
        cout<<"How many products do you want to enter? "<<endl;
        cin>>no_of_products;
        Product Productobj[no_of_products];
        for(i=0;i<no_of_products;i++)
        {
                cout<<"Enter values for product number: "<<i+1<<endl;
                Productobj[i].getdata();
        }
        Product::XYZ XYZobj;
        for(i=0;i<no_of_products;i++)
        {
                XYZobj.totalamount(Productobj[i]);
        }
        return 0;
}
