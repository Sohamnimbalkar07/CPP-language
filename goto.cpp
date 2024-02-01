#include <iostream>
using namespace std;
int main()
{
int n,num,i;
int sum = 0;
cout<<"enter a number of inputs"<<endl;
cin>>n;
for(i = 1;i<=n;i++){
    cout<<"enter n"<<i<<endl;
    cin>>num;
    if(num<0){
        goto average;
    }
    sum = sum+ num;

    }
    average:
    int average= sum/(i-1);
    cout<<"average is "<<average<<endl;
return 0;
}