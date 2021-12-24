#include<iostream>
using namespace std;

template<class T>
class stack
{
	private:
		int size;
		int top;
		T *stk;
		
	public:
	stack(int sz)
	{
		size=sz;
		top=-1;
		stk=new T[size];
		}	
	
	void push(T x);
	T pop();
		
};

template<class T>
void stack<T>::push(T x)
{
	if(top==size-1)
	cout<<"stack is full"<<endl;
	else
	{
		top++;
		stk[top]=x;
	}
}
template<class T>
T stack<T>::pop()
{
	T x;
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
		exit(0);
	}
	else
	{
		x=stk[top];
		top--;
	}
	return x;
}

int main()
{
	stack<string> s(3);
	s.push("hi");
	s.push("how");
	s.push("are");
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;

	
	
}
