#include<iostream>
using namespace std;

class Test{
	private:
		float real;
		float image;
	public:
		Test()
		{
			real=0;
			image=0;
		}
		
		Test(float x,float y)
		{
			real=x;
			image=y;
		}
		
		void display()
		{
			cout<<endl<<"The real is "<<real<<" and Imaginary is "<<image;
		}
		
		Test operator +(const Test &obj)
		{
			Test C;
			C.real=real + obj.real;
			C.image=image + obj.image;
			return C;
		}
};

int main()
{
	Test T1;
	float a,b;
	cout<<endl<<"Enter real number first and imaginary number: ";
	cin>>a>>b;
	Test T2(a,b);
	cout<<endl<<"Enter real number first and imaginary number again: ";
	cin>>a>>b;
	Test T3(a,b);
	
	T1=T2+T3;
	T1.display();
	
	return 0;
}
