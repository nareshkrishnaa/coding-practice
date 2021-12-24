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
    vector(int i,int j)
    {
	}
    vector operator+(vector v2)
    {
        vector sum(0,0);
        sum.i=i+v2.i;
        sum.j=j+v2.j;
        return sum;
    }
    
    friend ostream & operator << (ostream &out, const vector &v);
};
ostream & operator << (ostream &cout, const vector &v)
{
    cout <<v.i<<"i +"<<v.j<<"j"<<endl;
    
    return cout;
}
int main()
{
    vector v1;
    cout<<endl;
    vector v2;
    
    
    cout<<endl<<"the sum is "<<v1+v2;
    
    
}
