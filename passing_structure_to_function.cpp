#include <iostream>
using namespace std;

struct person
{
    char name[20];
    int age;
    int salary;
};

void displayinformation(person p);

int main()
{
    person p1;                           // structure variable
    cout<<"enter person's name"<<endl;
    cin.get(p1.name,20);
    cout<<"enter person's age"<<endl;
    cin>>p1.age;
    cout<<"enter person's salary"<<endl;
    cin>>p1.salary;

    displayinformation(p1);

return 0;
}

void displayinformation(person p)
{
cout<<p.name<<endl;
cout<<p.age<<endl;
cout<<p.salary<<endl;
}


