	#include<iostream>
using namespace std;
class prog
{
	public:
		int rno;
		char n[10];
		void base();
};
void prog::base()
{
	cout<<"\nEnter Name :";
	cin>>n;
	cout<<"Enter roll number :";
	cin>>rno;
}
class prog1:public prog
{
	public:
		int m1,s1,e1,c1,tm,pr;
		void reasult();
};
void prog1::reasult()
{
	cout<<"\nStudent name is "<<n;
	cout<<"\nStudnet roll no is "<<rno;
	cout<<"\nEnter maths marks :";
	cin>>m1;
	cout<<"\nEnter stat marks :";
	cin>>s1;
	cout<<"\nEnter electronics marks :";
	cin>>e1;
	cout<<"\nEnter computer marks :";
	cin>>c1;
	tm=m1+s1+e1+c1;
	cout<<"\n your total marks :"<<tm;
	pr=tm*100/200;
	cout<<"\n you got "<<pr<<"% in this exam ";
}
class prog2:public prog
{
	public:
	int t,b,p;
	void account();
};
void prog2::account()
{
	cout<<"\nEnter your paid fees :";
	cin>>p;
	t=40000;
	b=t-p;
	cout<<"\n"<<n<<" your balance fees is :"<<b;
}
int main()
{
	prog1 p1;
	p1.base();
	p1.reasult();
	prog2 p2;
	p2.base();
	p2.account();
}
