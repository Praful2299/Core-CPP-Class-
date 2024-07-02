#include<iostream>
using namespace std;

struct Employee{
	int eid;
	char ename[20];
	double salary;
};

int main(){
	Employee *p=new Employee;
	cout<<"Enter eid , name ,salary:";
	cin>>p->eid>>p->ename>>p->salary;
	
	cout<<"Name:"<<p->ename<<endl;
	cout<<"ID:"<<p->eid<<endl;
	cout<<"Salary:"<<p->salary;
}
