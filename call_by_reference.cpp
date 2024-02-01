#include <iostream>
using namespace std;
int& test();

int num;   // global variable

int main()
{
test() = 2;
cout<<num<<endl;
return 0;
}

int& test()
{ 
    return num;      // it return address to main function
}
