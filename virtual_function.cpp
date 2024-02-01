#include <iostream>
using namespace std;

class ClassA
{
    public:
    
    virtual void print()
    {
        cout<<"base class"<<endl;
    }
};

class ClassB : public ClassA
{
public:
void print()
{
    cout<<"derived class"<<endl;
}

};
int main()
{
ClassB B;
ClassA *A = &B;
A -> print();
return 0;
}