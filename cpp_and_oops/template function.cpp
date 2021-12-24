// template function

#include<iostream>
using namespace std;

template<class t,class r>
void add(t x,r y)
{
	cout<<x+y;
}

template<class t>
t maxof(t x,t y)
{
	return x>y?x:y;
}


int main()
{
	//cout<<10+7.8<<endl;
	//add(10,7.8f);
	cout<<maxof(12,3);
	return 0;
}
