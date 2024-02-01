#include <iostream>
using namespace std;
int main()
{
int a=10;
int b = ++a + ++a + ++a;
cout<<b<<endl;
a = a++;
cout<<a<<endl;
++a;
cout<<a<<endl;
return 0;
}