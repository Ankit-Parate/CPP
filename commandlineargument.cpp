#include "iostream"
#include "sstream"
using namespace std;
/*
int main(int count,char *ptr[])
{
    cout<<"File stored at starting location is: "<<ptr[0]<<endl;
    for(int i=1;i<count;i++)
        cout<<"Value stored at location: "<<i<<" is: "<<ptr[i]<<endl;
    return 0;
}
*/

/*
class Addition
{
    private:
            int a;
            int b;
            int add;
    public:
            Addition();
            Addition(int,int);
            void show();
};

Addition::Addition()
{
    cout<<"No values were passed"<<endl;
}

Addition::Addition(int a,int b)
{
    this->a=a;
    this->b=b;
    add=this->a+this->b;
}

void Addition::show()
{
    cout<<a<<" + "<<b<<" = "<<add<<endl;
}

int main(int a,int b)
{
    Addition Additionobj(a,b);
    Additionobj.show();
    return 0;
}
*/

int main(int count,char *ptr[])
{
    cout<<"Name of file is: "<<ptr[0]<<endl;
    stringstream obj1(ptr[1]),obj2(ptr[2]);
    double fnum,snum;
    obj1>>fnum;
    obj2>>snum;
    cout<<fnum+snum<<endl;
    return 0;
}