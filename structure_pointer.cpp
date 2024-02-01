#include <iostream>
using namespace std;
struct Distance
{
int height;
float length;
};

int main()
{
Distance *ptr, d1;
ptr = &d1;
cout<<"enter a height"<<endl;
cin>>(*ptr).height;
cout<<"enter a length"<<endl;
cin>>(*ptr).length;

cout<<(*ptr).height<<(*ptr).length<<endl;
return 0;
}