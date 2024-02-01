#include <iostream>
using namespace std;

class student
{
    int age;
    public:
    student()
    {
        age = 5;
    }
    void getdata()
    {
        cout<<"age is "<<age<<endl;
    }
    void test()
    {   
        cout<<"test is successful"<<endl;
    }
};
int main()
{
student *ptr = new student();
student *ptr1 = new student();
student *ptr2 = new student();
ptr -> getdata();
ptr -> test();
ptr1 -> getdata();
ptr2 -> getdata();

delete ptr,ptr1,ptr2;
return 0;
}