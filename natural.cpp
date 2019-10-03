//PRINT NATURAL NUMBERS USING RECURSION. INPUT FROM USER
//DONE
#include "iostream"
using namespace std;
void recursion(int,int);
int main()
{
        int num,check=0;
        cout<<"Enter the number: "<<endl;
        cin>>num;
        cout<<"Recursion is: "<<endl;
        recursion(num,check);
        return 0;
}

void recursion(int num,int check)
{
        if(check>num)
                return;
        else if(check<=num)
        {
                cout<<check<<endl;
                recursion(num,check+1);
        }
}