// Virtual function
// yo chai base class ko function lai redefined garxa derived class ma


#include<iostream>
using namespace std;

class A{
	public:
		virtual void show()
		{
			cout<<"good morning";
		}
};

class B : public A{
	public:
		void show()
		{
			cout<<"good bye";
		}
};

int main()
{
	B b;
	b.show();
	return 0;
}
