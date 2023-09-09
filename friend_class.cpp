
#include<iostream>
using namespace std;

class first;
class second{
	private:
		int b;
	public:
		void getdata(){
			cout<<"Enter a number : ";
			cin>>b;
			cout<<endl;
		}
	friend class first;
}p;

class first{
	private:
		int a;
	public:
		void getdata(){
			cout<<"Enter a number : ";
			cin>>a;
			cout<<endl;
		}
		void sum(){
			int sum=0;
			first n;
			sum= a + p.b;
			cout<<"THe sum is "<<sum;

		}
}m;

int main()
{
	m.getdata();
	p.getdata();
	m.sum();
	return 0;
}
