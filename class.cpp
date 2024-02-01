#include <iostream>
using namespace std;

class room
{
    public:
    float length;
    float breadth;
    float height;

    double calculatearea(){
        return length*breadth;
    }

    double calculatevolume(){
        return length*breadth*height;
    }
    
};
int main()
{
room room1;
room1.length = 12.3;
room1.breadth = 9.5;
room1.height = 10.1;

cout<<"area of room 1 is "<<room1.calculatearea()<<endl;
cout<<"volume  room 1 is "<<room1.calculatevolume()<<endl;

return 0;
}