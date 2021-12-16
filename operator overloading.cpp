#include <iostream>

using namespace std;
class complex
{
    public:
    int real;
    int imaginary;
    
    complex operator+(complex c2)
    {
        complex temp ;
        temp.real=real+c2.real;
        temp.imaginary=imaginary+c2.imaginary;
        
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.real=3;c1.imaginary=5;
    c2.real=5;c2.imaginary=3;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.imaginary;
}
