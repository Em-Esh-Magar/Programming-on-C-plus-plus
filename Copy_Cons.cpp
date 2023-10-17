#include<iostream>
using namespace std;

class Test{
	private:
		int l;
		int b;
	public:
		Test(int len, int bre)
		{
			l=len;
			b=bre;
		}
		
		void showdata()
		{
			cout<<endl<<"The area of rectangle is "<<l*b;
		}
		
		Test(Test &a)
		{
			l=a.l;
			b=a.b;
		}
};

int main()
{
	Test x(5,10);
	x.showdata();
	
	Test y=x;
	y.showdata();
	
	return 0;
}
