#include "iostream"
using namespace std;
class PQR;
class XYZ;

class ABC
{
    private:
            int x;
    public:
            ABC(int);
            friend XYZ operator -(ABC o1,PQR o2);
};

ABC::ABC(int x)
{
    this->x=x;
}

class PQR
{
    private:
            int y;
    public:
            PQR(int);
            friend XYZ operator -(ABC o1,PQR o2);
};

PQR::PQR(int y)
{
    this->y=y;
}

class XYZ
{
    private:
            int z;
    public:
            friend XYZ operator -(ABC o1,PQR o2);
            void show();
};

XYZ operator -(ABC o1, PQR o2)
{
    XYZ temp;
    temp.z=o1.x-o2.y;
    return temp;
}

void XYZ::show()
{
    cout<<z<<endl;
}

int main()
{
    ABC ABCobj(30);
    PQR PQRobj(20);
    XYZ XYZobj= ABCobj - PQRobj;
    cout<<"Value of subtraction is: "<<endl;
    XYZobj.show();
    return 0;
}