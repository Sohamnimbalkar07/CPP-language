// parameterized constructor

#include <iostream>
using namespace std;

class wall
{
    private:
    int length;
    int height;
    public:
    wall(int len, int hei)
    {
        length = len;
        height = hei;
    }

    int calculatearea()
    {
         return length*height;
    }

};
int main()
{
wall wall1(9,3);
wall wall2(5,4);
cout<<"area is "<<wall1.calculatearea()<<endl;
cout<<"area is "<<wall2.calculatearea()<<endl;

return 0;
}