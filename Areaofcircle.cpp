#include "iostream"
using namespace std;

class Area
{
        private:
                int radius;
                double area;
        public:
                void init();
                void calc();
                void display();
};

void Area::init()
{
        cout<<"Input the radius of the circle: "<<endl;
        cin>>radius;
}

void Area::calc()
{
        area=2*3.14*radius;
}

void Area::display()
{
        cout<<"Area of circle is: "<<area<<endl;
}

int main()
{
        Area Areaobj;
        Areaobj.init();
        Areaobj.calc();
        Areaobj.display();
        return 0;
}
