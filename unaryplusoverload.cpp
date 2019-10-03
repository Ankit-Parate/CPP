#include "iostream"
using namespace std;

class Unary
{
    private:
            int x;
    public:
            Unary(int);
            void show();
            void operator ++();
}

Unary::Unary(int x)
{
    this->x=x;
}

void Unary::Show()
{
    cout<<x<<endl;
}

void Unary::operator ++()
{
    x=x+1;
}

int main()
{
    Unary Unaryobj;
    Unary.show();
    ++Unaryobj;
    Unary.show();
    return 0;
}