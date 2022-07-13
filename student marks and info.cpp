#include<iostream>
using namespace std;
class prog
{
	int tm;
	float p;
	public:
		void info(int r,int m,int s,int e,int c,char n[10])
		{
			tm=m+s+e+c;
			p=tm*100/200;
			cout<<"\n\nname of student is "<<n;
			cout<<"\nroll no of student is  "<<r;
			cout<<"\ntotal marks of student is "<<tm;
			cout<<"\nStudent got "<<p<<"%";
		}
};
int main()
{
	int r,m,s,e,c;
	char n[10];
	cout<<"Enter student name :";
	cin>>n;
	cout<<"Enter student roll no :";
	cin>>r;
	cout<<"Enter maths marks :";
	cin>>m;
	cout<<"Enter stat marks :";
	cin>>s;
	cout<<"Enter electronics marks :";
	cin>>e;
	cout<<"Enter computer marks :";
	cin>>c;
	prog p;
	p.info(r,m,s,e,c,n);
}
