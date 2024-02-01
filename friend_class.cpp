#include <iostream>
using namespace std;

class ClassB;
class ClassA
{
    private:
    int numA;
    friend class ClassB;
    public:
    ClassA()
    {
        numA = 10;
    }
};

class ClassB
{
    private:
    int numB;
    public:
    ClassB()
    {
        numB = 5;
    }

    int add()
    {   
        
        ClassA objectA;
        return objectA.numA + numB;
    }

};
int main()
{

ClassB objectB;
cout<<objectB.add()<<endl;
return 0;
}