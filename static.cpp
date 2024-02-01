#include <iostream>
using namespace std;
void test();

int main()
{
test();
test();
return 0;
}

void test()
{
    static int c = 1;
    c++;
    cout<<c<<endl;
}