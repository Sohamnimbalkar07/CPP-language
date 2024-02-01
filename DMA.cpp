#include <iostream>
using namespace std;
int main()
{
char *ptr;
int *ptr1;

ptr = new char;
ptr1 = new int;
*ptr = 'a';
*ptr1 = 5;

cout<<*ptr<<endl;
cout<<*ptr1<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;


delete ptr;
delete ptr1;

return 0;
}