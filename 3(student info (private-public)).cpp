#include<iostream>
using namespace std;
class student
{
	private:
		int rno,m,s,e,c,tm;
		char n[10];	
		float p;
		void input()
		{
			cout<<"Enter student name :";
			cin>>n;
			cout<<"Enter roll no :";
			cin>>rno;
			cout<<"Enter maths marks :";
			cin>>m;
			cout<<"Enter stat marks :";
			cin>>s;
			cout<<"Enter electronics marks :";
			cin>>e;
			cout<<"Enter computer marks :";
			cin>>c;
		}
	public:
		void reasult()
		{
			input();
			tm=m+s+e+c;	
			p=(tm*100)/200;
			cout<<"\n\nstudent name is "<<n;
			cout<<"\nstudent roll no is "<<rno;
			cout<<"\nstudent got "<<tm<<" marks out of 200";
			cout<<"\nstudent got "<<p<<"% in this exam";
			if(p<35)
				{
					cout<<"\n\n\nStudent fail in this exam!";
				}
				else if(p<=50){
					cout<<"\n\n\n"<<n<<" you pass in this exam!!";
				}
				else if(p<=60){
					cout<<"\n\n\n"<<n<<" you got 2nd class in this exam!!!";
				}
				else if(p<=70){
					cout<<"\n\n\n"<<n<<" you got 1st class in this exam!!!!";
				}
				else if(p<=100){
					cout<<"\n\n\n"<<n<<" you are in distinction!!!!!";
				}
				}
};
int main()
{
	student obj;
	obj.reasult();
}
