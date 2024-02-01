#include <iostream>
using namespace std;
void display(int a[5]);
int main()
{
int marks[5] = {88,93,80,75,65};
display(marks);

return 0;
}

void display(int a[5])
{
    for(int i = 0;i<5;i++){
        cout<<"student "<<i+1<<" = "<<a[i]<<endl;
    }
}