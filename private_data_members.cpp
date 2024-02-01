#include <iostream>
using namespace std;

class room
{
    private:
    double length;
    double breadth;
    double height;

    public:
    void getdata(double len, double brth, double heit)
    {
        length = len;
        breadth = brth;
        height = heit;
    }

    double calculatearea()
    {
        return length*breadth;
    }

    double calculatevolume()
    {
        return length*breadth*height;
    }

};
int main()
{   double l,b,h;
    room room1;
    cout<<"enter length, breadth and height"<<endl;
    cin>>l>>b>>h;
    room1.getdata(l, b, h);
    cout<<"area of room 1 is "<<room1.calculatearea()<<endl;
    cout<<"volume of room 1 is "<<room1.calculatevolume()<<endl;

return 0;
}