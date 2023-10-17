//Operator overloading using friend function

#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int image;
	public:
		void setdata(){
			cout<<endl<<"Enter real number: ";
			cin>>real;
			
			cout<<endl<<"Enter imaginary number: ";
			cin>>image;
		}
		
		friend Complex operator + (Complex , Complex);
		/*
		This is for binary operator overloading without friend function
		Complex operator + (Complex obj)
		{
			Complex temp;
			temp.real=real+obj.real;
			temp.image=image+obj.image;
			return temp;
		}
		*/
		void showdata()
		{
			cout<<endl<<"The real part is "<<real<<" and imaginary is "<<image;
		}
};

Complex operator + (Complex obj, Complex obj1)
{
	Complex temp; 
	temp.real=obj1.real+obj.real;
	temp.image=obj1.image+obj.image;
	return temp;
}

int main()
{
	Complex C1,C2;
	C1.setdata();
	C2.setdata();
	Complex C3 = C1+C2;
	C3.showdata();
	return 0;
}
