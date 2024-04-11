#include<iostream>
using namespace std;

class A{
	private:
		int hrs;
		int sec;
	public:
		void display()
		{
			cout<<endl<<hrs<<" "<<sec;
		}
		A()
		{
			hrs=2;
			sec=5;
		}
		operator int ()
		{
			cout<<hrs*60+sec;
		}
};

int main()
{
	int num;
	A a;
	num=a;
	//a.display();
	return 0;
}
