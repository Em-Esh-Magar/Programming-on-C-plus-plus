//Operator Overloadding

#include<iostream>
using namespace std;

class Test{
	private:
		int a;
	public:
		Test(int x)
		{
			a=x;
		}
		
		void operator ++()
		{
			a*=10;
		}
		
		void operator ++(int){
			a*=3;
		}
		
		void showdata()
		{
			cout<<endl<<"The value after operator overloading :"<<a;
		}
		
};

int main()
{
	Test b(15);
	++b;
	b.showdata();
	b++;
	b.showdata();
	return 0;
}




