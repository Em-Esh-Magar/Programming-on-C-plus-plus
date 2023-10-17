#include<iostream>
using namespace std;

class Test{
	int a;
	int b;
	public:
		Test(int x, int y)
		{
			a=x;
			b=y;
			cout<<endl<<"Parameterized constructor";
		}
		void add()
		{
			cout<<endl<<"The sum of two number is "<<a+b;
		}
		~Test()
		{
			cout<<endl<<"Destroutor";
		}
};

int main()
{
	//Test i,j;
	//Test i(5,7);
	int p,q;
	cout<<endl<<"Enter two number: ";
	cin>>p>>q;
	Test i(p,q);
	i.add();
	int c,d;
	cout<<endl<<"Enter two number: ";
	cin>>c>>d;
	Test j(c,d);
	j.add();
	return 0;
}
