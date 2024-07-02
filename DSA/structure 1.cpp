//WAP TO CREATE A STRUCTURE NAMED EMPLOYEE CREATE SOME INSTANCE OF VARIABLE OF IT.
#include<iostream>
using namespace std;

struct Employee{
	int eid;
	char ename[20];
	double salary;
};

int main(){
	Employee e1,e2,e3,*p;
	p=&e1;
	cout<<"Enter eid , name ,salary:";
	cin>>p->eid>>p->ename>>p->salary;

	cout<<"Dot operator\n";
	cout<<"Name:"<<e1.ename<<endl;
	cout<<"ID:"<<e1.eid<<endl;
	cout<<"Salary:"<<e1.salary<<endl;

	p=&e1;
	cout<<"Pointer \n";
	cout<<"Name:"<<p->ename<<endl;
	cout<<"ID:"<<p->eid<<endl;
	cout<<"Salary:"<<p->salary;
}
