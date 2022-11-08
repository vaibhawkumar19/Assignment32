/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
#include<stdio.h>
using namespace std;
class Person
{
	protected:
		char name[20];
		char address[30];
		long long phone_no;
};
class Employee:public Person
{
	public:
	int eno;
	char ename[20];	
};
class Manager:public Employee
{
	public:
		char Designation[100];
		char Dept_name[20];
		long long salary;
	public:
		void accept_details()
		{
		cout<<"enter the Details of Manager\n";
		cout<<"_______________________________\n";
		cout<<"enter name:-"<<endl;
		cin>>name;
		cout<<"enter address:-"<<endl;
		cin>>address;
		cout<<"enter phone number:-"<<endl;
		cin>>phone_no;
		cout<<"enter Designation:-"<<endl;
		cin>>Designation;
		cout<<"enter Dept_name:-"<<endl;
		cin>>Dept_name;
		cout<<"enter salary:-";
		cin>>salary;
		}
};
int main()
{
	int i,cnt,tmp;
	Manager man[100];
	cout<<"\n How many Manager you want to enter? : ";
	cin>>cnt;
	for(i=0;i<=cnt;i++)
	{
		man[i].accept_details();
	}
	tmp=0;
	for(i=1;i<=cnt;i++)
	{
		if(man[tmp].salary<man[i].salary)
		tmp=i;
	}
	cout<<"\n Manager with highest salary is :"<<man[tmp].salary;
	cout<<"\n and,Manager Name is :-"<<man[tmp].ename;
return 0;	
}

