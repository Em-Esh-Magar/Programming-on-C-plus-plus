/*
 Create a C++ class representing a circle with private data member for radius. Implement a friend function calculateArea that calculates and returns the area of the circle.
*/ 

#include<iostream>
using namespace std;

class Circle{
	private:
		float radius;
		static float pi;
	public:
		void getdata()
		{
			cout<<"Enter a radius: ";
			cin>>radius;
		}
	friend float calculateArea(Circle);
}C1;

float Circle :: pi = 3.1415;

float calculateArea(Circle c)
{
	float area;
	area = c.pi * c.radius * c.radius;
	return area;
}

int main()
{
	// Circle C1;
	C1.getdata();
	float a = calculateArea(C1);
	cout<<endl<<"The area of circle is : "<<a;
	return 0;
}
