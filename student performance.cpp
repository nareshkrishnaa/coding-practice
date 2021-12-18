#include <iostream>
#include<string>
using namespace std;

class performance
{
  private:
  int* marks;
  string name;
  int n;
  
  public:
  performance()
  {
      
      cout<<"enter name:";
    cin>>name;
    
    cout<<"enter number of subjexts:";
    cin>>n;
    
      
      marks=new int [n];
      cout<<"enter the marks:";
      for(int i=0;i<n;i++)
      {
          cin>>marks[i];
      }
  }
  void detailsof();
   friend ostream & operator << (ostream &out, const performance &p);
    
};
ostream & operator << (ostream &cout, const performance &p)
{
    cout <<"name is "<< p.name<<endl;
    cout <<"number of subjects"<<p.n;
    return cout;
}

void performance:: detailsof()
{
    int total=0;
    for(int i=0;i<n;i++)
    total+=marks[i];
    cout<<"name is "<<name<<endl;
    cout<<"total is"<<total;
}

int main()
{
    
  performance s1;
  
  cout<<s1;
  
  
}