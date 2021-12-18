#include <iostream>

using namespace std;

class vector
{
    int i;
    int j;
    
    public:
    vector()
    {
        cout<<"Enter the i component : ";
        cin>>i;
        cout<<"Enter the j component : ";
        cin>>j;
    }
    
    vector operator+(vector v2)
    {
        vector sum;
        sum.i=i+v2.i;
        sum.j=j+v2.j;
        return sum;
    }
};

int main()
{
    vector v1;
    cout<<endl;
    vector v2;
    
    vector v3=v1+v2;
    
    cout<<v3;
    
    
}