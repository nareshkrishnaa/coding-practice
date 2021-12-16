#include <iostream>

using namespace std;
class complex
{
   private:
   int real;
   int img;
   
   public:
   complex(int r=0,int i=0)
   {
       real=r;
       img=i;
   }
   
  friend complex add(complex c1, complex c2);
  
  void display()
  {
      cout<<real<<"+i"<<img;
  }
};

complex add(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    complex c1(3,4);
    complex c2(5,5);
    complex c3=add(c1,c2);
    c3.display();
    
}