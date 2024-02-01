// copy constructor

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

   wall (wall &obj)
   { cout<<"copy constructor called!!"<<endl;
    length = obj.length;
    height = obj.height;
    }

    int calculatearea()
    {
         return length*height;
    }

};
int main()
{
wall wall1(10,2);
wall wall2(wall1);
// OR wall wall2 = wall1;
cout<<"area is "<<wall1.calculatearea()<<endl;
cout<<"area is "<<wall2.calculatearea()<<endl;

return 0;
}