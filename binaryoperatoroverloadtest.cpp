#include "iostream"
using namespace std;

class Addition
{
    private:
            int objectvariable;
    public:
            Addition(int);
            void operator +(int);
};

Addition::Addition(int objectvariable)
{
    this->objectvariable=objectvariable;
}

void Addition::operator +(int value)
{
    int sum;
    sum=objectvariable + value;
    cout<<"Sum is: "<<sum<<endl;
}

int main()
{
    Addition Additionobj(5);
    Additionobj + 5;
    return 0;
}