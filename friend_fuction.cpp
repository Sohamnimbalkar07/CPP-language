#include <iostream>
using namespace std;

class Distance
{   
    private:
    int meter;
    friend int addfive(Distance p);

    public:
    Distance()
    {
        meter = 10;
    }
};

int addfive(Distance p)
{
    p.meter = p.meter + 5;
    return p.meter;
};
int main()
{
Distance a;

cout<<addfive(a)<<endl;
return 0;
}