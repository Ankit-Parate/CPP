#include "iostream"
using namespace std;

class ABC
{
    private:    
            int x;
    public:
            ABC(int);
            void show();
            friend class XYZ;
};

ABC::ABC(int x)
{
    this->x=x;
}

void ABC::show()
{
    cout<<x<<endl;
}

class XYZ
{
    public:
            XYZ();
};

XYZ::XYZ()
{
    ABC ABCobj;
    ABCobj.x=40;
}

int main()
{
    ABC ABCobj(4);
    ABCobj.show();
    XYZ XYZobj;
    ABCobj.show();
    return 0;
}