#include "iostream"
#include "cstring"
using namespace std;

class Person
{
        private:
                int age;
                char name[30];
        public:
                Person();
                Person(int,char pname[30]);
                void display();
};

Person::Person()
{
        age=18;
}
Person::Person(int age, char pname[30])
{
        this->age=age;
        strcpy(name,pname);
}

void Person::display()
{
        cout<<"Name of person: "<<name<<endl<<"Age of person: "<<age<<endl;
}

int main()
{
        Person Personobj(21,"Ankit");
        Personobj.display();
        return 0;
}
