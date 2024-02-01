#include <iostream>
using namespace std;

struct person
{
    char name[20];
    int age;
    int salary;
};
int main()
{
    person p1;                           // structure variable
    cout<<"enter person's name"<<endl;
    cin.get(p1.name,20);
    cout<<"enter person's age"<<endl;
    cin>>p1.age;
    cout<<"enter person's salary"<<endl;
    cin>>p1.salary;

    cout<<p1.name<<endl;
    cout<<p1.age<<endl;
    cout<<p1.salary<<endl;


return 0;
}