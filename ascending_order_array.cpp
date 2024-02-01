#include <iostream>
using namespace std;
int main()
{
int a[9] = {4,2,7,6,9,1,8,3,5};
for(int i = 0;i<=8;i++)
{
    for(int j = 0;j<=8;j++)
    {
        while(a[j]>a[i])
        {
            int temp;
            
            temp = a[i];
            a[i]=a[j];
            a[j]= temp;
            

        }
    }

} 
for(int i = 0;i<=8;i++)
{
    cout<<a[i]<<endl;
}

return 0;
}