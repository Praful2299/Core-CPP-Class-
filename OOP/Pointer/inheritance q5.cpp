#include<iostream>
using namespace std;

class Employee{
	public:
		virtual void calculate_salary(){
			cout<<"I am a f() of Employee class";
		}
		
		virtual void display_details(){
			cout<<"I am a f() of employee class";
		}
};

class Manager:public Employee{
	void calculate_salary(){
		cout<<"Salary of manager=5000000/-"<<endl;
	}
	void display_details(){
		cout<<"Name of manager-> Praful \n Batch-> P23"<<endl;
	}
};

class Worker:public Employee{
	void calculate_salary(){
		cout<<"Salary of Worker: 1000000/-"<<endl;
	}
	void display_details(){
		cout<<"Name of worker: PrafulS \n Batch:P23"<<endl;
	}
};

int main(){
	Employee *base;
	Manager m;
	base=&m;
	base->display_details();
	base->calculate_salary();
//	Worker w;
//	base=&w;
//	base->display_details();
//	base->calculate_salary();
}
