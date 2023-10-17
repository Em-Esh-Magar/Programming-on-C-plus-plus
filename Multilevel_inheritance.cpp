/*
Assume that the test results of a student are stored in three different classes. Class Student stores the roll number, class Test stores the marks obtained  
in two subjects and class Result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in
the test and roll number of students through multi-level inheritance.
*/

#include<iostream>
using namespace std;

class Student{
	protected:
		int roll_number;
	public:
		void get_roll(){
			cout<<endl<<"Enter your roll number: ";
			cin>>roll_number;
		}
		int take_roll(){
			return roll_number;
		}
};

class Test : public Student
{
	protected:
		float english;
		float math;
	public:
		void take_marks()
		{
			cout<<endl<<"Enter your marks in english and math: "<<endl;
			cin>>english>>math;
		}
};

class Result : public Test
{
	private:
		float total;
	public:
		void t_mark()
		{
			total = english + math;
		}
		void display()
		{
			cout<<endl<<"Roll Number : "<<roll_number;
			cout<<endl<<"The total marks is "<<total;
		}
};

int main()
{
	Result Stu;
	Test T;
	Stu.get_roll();
	Stu.take_marks();
	Stu.t_mark();
	Stu.display();
	return 0;
}
