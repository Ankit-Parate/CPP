#include "iostream"
using namespace std;

class oneBHK
{
        protected:
                int roomArea;
                int hallArea;
                int price;
        public:
                oneBHK(){};
                oneBHK(int,int,int);
                void show();
};


oneBHK::oneBHK(int roomArea,int hallArea,int price)
{
        this->roomArea=roomArea;
        this->hallArea=hallArea;
        this->price=price;
}

void oneBHK::show()
{
        cout<<"roomArea: "<<roomArea<<endl<<"hallArea: "<<hallArea<<endl<<"price: "<<price<<endl;
}

class twoBHK: public oneBHK
{
        private:
                int room2area;
        public:
                //twoBHK();
                twoBHK(int, int, int, int);
                void show();
};
/*
twoBHK::twoBHK()
{
        room2area=200;
}
*/
twoBHK::twoBHK(int roomArea, int hallArea, int price, int room2area): oneBHK(roomArea, hallArea, price)
{
        this->room2area=room2area;
}

void twoBHK::show()
{
        cout<<"roomArea: "<<roomArea<<endl<<"hallArea: "<<hallArea<<endl<<"Room2area: "<<room2area<<endl<<"price: "<<price<<endl;
}
int main()
{
        oneBHK oneBHKobj(230,350,3100000);      //REMOVE THE ARGUMENTS IN ORDER TO RUN THE UN-PARAMETERIZED CONSTRUCTOR
        twoBHK twoBHKobj(250);
        oneBHKobj.show();
        twoBHKobj.show();
        return 0;
}
