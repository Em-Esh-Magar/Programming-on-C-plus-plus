

#include<iostream>
using namespace std;

class A{
	private:
		int a;
		int b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter any 2 number: ";
			cin>>a>>b;
		}
		
		int geta()
		{
			return a;
		}
		
		int getb()
		{
			return b;
		}
};

class B : public A
{
	private:
		int c;
	public:
		void display()
		{
			cout<<endl<<"The number are "<<geta()<<" and "<<getb();
			cout<<endl<<"The sum is "<<c;
		}
		
		void sum()
		{
			c = geta()+getb();
		}
		/*
		public:
		void setdata()
		{
			cout<<endl<<"Enter any 2 number: ";
			cin>>a>>b;
		}
		
		int geta()
		{
			return a;
		}
		
		int getb()
		{
			return b;
		}*/
};

int main()
{
	B obj, mbj;
	obj.setdata();
	obj.sum();
	obj.display();
	
	mbj.setdata();
	mbj.sum();
	mbj.display();
	return 0;	
}
