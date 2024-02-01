#include <iostream>
using namespace std;

class student
{   
    public:
    int marks;

    student( int m)
    {
        marks = m;
    }
    
};

void calculateaverage(student s1, student s2)
    {
        int average = (s1.marks + s2.marks) /2;
        cout<<"average is = "<<average<<endl;
    }

int main()
{
    student student1(90), student2(88);
    calculateaverage(student1, student2);
    return 0;
}