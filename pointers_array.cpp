#include <iostream>
using namespace std;
int main()
{
int *ptr;
int *p;
int x[5];
p = x;
int a;
ptr = &a;
a =1;
cout<<a<<endl;

*ptr = 5;

cout<<a<<endl;
cout<<*ptr<<endl;
cout<<p<<endl;

return 0;
}