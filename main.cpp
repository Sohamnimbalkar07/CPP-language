#include <iostream>
using namespace std;
int main()
{
char a[6] = "soham";
char b[6] = "s";

int num=0;
for(int i= 0;i<10;i++)
{
  if( a[i]!= '\0' && b[i]!= '\0')
  {
      if(a[i]==b[i])
      {
        num= num +1;
      }
      else{
          break;
      }
  }
}
cout<<num<<endl;
return 0;
}