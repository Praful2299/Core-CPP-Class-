#include<iostream>
using namespace std;

struct employee{
	int eid;
	string name;
};
int main(){
	employee e1,*p;
	p=&e1;
	cout<<"Enter employye id:";
	cin>>p->eid;
	cout<<"Enter full name:";
	getline(cin,name);
	cout<<"Employee id:"<<p->eid<<endl<<"Name of employee:"<<p->name;
	
}
