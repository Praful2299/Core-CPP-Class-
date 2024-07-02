#include<iostream>
using namespace std;

class Person{
	public:
		void common(){
			cout<<"I am a common f() \n";
		}
		virtual void display(){
			cout<<"I am a f() of Person class \n";
		}
};

class Employee:public Person{
	public:
		void display(){
			cout<<"I am a f() of Employee Classs \n";
		}
};

int main(){
	Person p,*base;
	Employee e;
	base=&e;
	base->common();
	base->display();
	base=&p;
	base->display();
}
