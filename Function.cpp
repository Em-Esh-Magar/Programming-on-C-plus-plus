#include<iostream>
using namespace std;
int hero(int);

int main()
{
	int ptr;
	//ptr= new int;
	cout<<"Enter a number: ";
	cin>>ptr;
	int a;
	a=hero(ptr);
	if(a==1)
	{
		cout<<	"The number is odd.";
	}	
	else
	{
		cout<<"The number is even.";
	}
	return 0;
}
int hero(int num)
{
	if(num%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
