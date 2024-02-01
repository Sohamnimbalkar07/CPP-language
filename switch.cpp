#include <iostream>
using namespace std;
int main()
{
char op;
int a,b,result;
cout<<"enter two numbers"<<endl;
cin>>a>>b;
cout<<"enter a operator"<<endl;
cin>>op;

switch(op)
{
case '+':
result= a + b;
cout<<"addition is "<<result<<endl;
break;

case '-':
result= a-b;
cout<<"substraction is "<<result<<endl;
break;

case '*':
result = a*b;
cout<<"multiplication is "<<result<<endl;
break;

case '/':
result = a/b;
cout<<"division is "<<result<<endl;
break;

default:
cout<<"invalid input"<<endl;
}
return 0;
}
