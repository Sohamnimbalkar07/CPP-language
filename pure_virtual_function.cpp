#include <iostream>
using namespace std;

class base
{
    public:
    virtual void print() = 0;

};

class derived : public base
{
    public:
    void print()
    {
        cout<<"derived class"<<endl;
    }
};

int main()
{
base *ptr;
derived derived1;
ptr = &derived1;

ptr -> print();

return 0;
}