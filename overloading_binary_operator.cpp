#include <iostream>
using namespace std;

class complex 
{
    private:
    int real = 0;
    int imag = 0;
    public:
    void input()
{
        cin>>real>>imag;
}
    complex operator + (complex &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        if(imag<0){
        cout<<"result is "<<real<<imag<<"i"<<endl;
        }
        else
        {
        cout<<"result is "<<real<<"+"<<imag<<"i"<<endl;
  
        }
    }
};
int main()
{
complex complex1, complex2,result;
cout<<"enter real and imaginary part of object 1"<<endl;
complex1.input();
cout<<"enter real and imaginary part of object 2"<<endl;
complex2.input();
result = complex1 + complex2;
result.output();

return 0;
}