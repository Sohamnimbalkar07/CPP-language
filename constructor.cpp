#include <iostream>
using namespace std;

class wall
{
    private:
    int length;
    public:
    wall()
    {
        cout<<"creating a wall"<<endl;
        length = 5;
        cout<<length<<endl;
    }

};
int main()
{
wall wall1, wall2;

return 0;
}