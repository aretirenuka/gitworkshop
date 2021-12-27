#include<iostream>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
	public:void read();
	       void display();
};
void student::read()
{
	cout<<"\nEnter register no:";
	cin>>rno;
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nenter marks:";
	cin>>marks;
}
void student::display()
{
	cout<<"Rno:"<<rno;
	cout<<"Name:"<<name;
	cout<<"Marks:"<<marks;
}
int main()
{
	student s1;
	s1.read();
	s1.display();
	return(0);
}