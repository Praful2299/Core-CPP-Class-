#include<iostream>
using namespace std;

class Employee{
	public:
		 	string name;
		 	int id;
			virtual void display()=0;	

};
class Manager:public Employee{
	public:
	Manager(string n ,int ido){
		cout<<"Details of manager:"<<endl;
		name=n;
		id=ido;
	}
	void display(){
		cout<<"Name of manage:"<<name<<endl<<"ID:"<<id<<endl;
	}
};
class Engineer:public Employee{
	public:
	Engineer(string n ,int ido){
		cout<<"Details of engineer:"<<endl;
		name=n;
		id=ido;
	}
	void display(){
		cout<<"Name of engineer:"<<name<<endl<<"ID:"<<id<<endl;
	}
};

int main(){
	Employee *e;
	Manager m("Praful",22061999);
	e=&m;
	e->display();
	Engineer eng("ANubhav",16061999);
	e=&eng;
	e->display();
}
