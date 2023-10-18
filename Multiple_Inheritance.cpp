/*
 Make a class named Fruit with a data member to calculate the total number of fruits and total price.
 Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
 Print the number of fruits of each type and the total number of fruits in the basket.
*/

#include<iostream>
using namespace std;

class Apple{
	private:
		int apple;
		float apple_price;
	public:
		void apple_data()
		{
			cout<<endl<<"Enter your quantity of an apple: ";
			cin>>apple;
			cout<<endl<<"Enter price of an apple per unit: ";
			cin>>apple_price;
		}
		int apple_quantity()
		{
			return apple;
		}
		float app_price()
		{
			return apple_price;
		}
};

class Mango{
	private:
		int mango;
		float mango_price;
	public:
		void mango_data()
		{
			cout<<endl<<"Enter your quantity of a mango : ";
			cin>>mango;
			cout<<endl<<"Enter price of a mango per unit : ";
			cin>>mango_price;
		}
		int mango_quantity()
		{
			return mango;
		}
		float mang_price()
		{
			return mango_price;
		}
};

class Fruit : public Apple, public Mango
{
	private:
		float total_price;
		int total_quantity;
	public:
		void add_quantity()
		{
			total_quantity = mango_quantity() + apple_quantity();
		}
		void add_price()
		{
			total_price = (app_price() *  apple_quantity() ) + ( mang_price() * mango_quantity() );
		}
		void display()
		{
			cout<<endl<<"The price of "<<apple_quantity()<<" apple with price "<<app_price()<<" and "<<mango_quantity()<<" mango with price "<<mango_quantity()<<" is "<<total_price;
			cout<<endl<<"Total quantity is "<<total_quantity;
		}
};

int main()
{
	Fruit F;
	F.apple_data();
	//F.apple_quantity();
	F.mango_data();
	//F.mang_price();
	F.add_price();
	F.add_quantity();
	F.display();
	return 0;
}

