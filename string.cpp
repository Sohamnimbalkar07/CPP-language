#include <iostream>
using namespace std;
int main()
{
char str[16];                                        
char str1[15];
cout<<"enter your name"<<endl;
cin.get(str,16);
cout<<str<<endl;

cout<<"enter your name"<<endl;
cin>>str1;
cout<<str1<<endl;

return 0;
}

/*  cin.get(str,16) is to string which has space in between
    only cin cannot store string which has spce in between  */