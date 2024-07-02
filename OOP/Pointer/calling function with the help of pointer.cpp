#include<iostream>
using namespace std;

class Person{
	public:
	void common(){
		cout<<"I am f() of common class \n";
	}
	
	void display(){
		cout<<"I am a f() of person class \n";
	}
};

class Employee:public Person{
	public:
		void display(){
			cout<<"I am a f() of Employee class";
		}
};

int main(){
	Person p,*base;
	p.display();
	p.display();
	base->display();
	base->common();
}
