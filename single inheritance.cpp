#include<iostream>
using namespace std;
class prog 
{
	public:
		int a,b,c;
		void input();
};
void prog :: input()
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
}
class prog2:public prog
{
	public:
	void add();
};
void prog2::add()
{
	c=a+b;
	cout<<"\n"<<c;
}
int main()
{
	prog2 p2;
	p2.input();
	p2.add();
}

