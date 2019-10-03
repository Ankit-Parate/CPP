//ADD NATURAL NUMBERS USING RECURSION. INPUT FROM USER
//DONE
#include "iostream"
using namespace std;
void recursion(int,int,int);
int main()
{
        int num,check=0,addition=0;
        cout<<"Enter the number: "<<endl;
        cin>>num;
        recursion(num,check,addition);
        return 0;
}

void recursion(int num,int check,int addition)
{
        if(check>num)
        {
                cout<<"Addition is: "<<endl<<addition<<endl;
                return;
        }
        else if(check<=num)
        {
                addition=addition+check;
                recursion(num,check+1,addition);
        }
}
