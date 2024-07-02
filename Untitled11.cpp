#include<iostream>
using namespace std;

class Parent{
	public:
	virtual void display(){
		cout<<"i am display() of parent class";
	}
};

class Child1:public Parent{
		void display(){
			cout<<"I am the display() of Child1";
		}
		
};

class Child2:public Parent{
	void display(){
		cout<<"I am the display() of Child2";
	}
};

int main(){
	Parent *p,pa;
	Child1 ch1;
	Child2 ch2;
	p=&pa;
	p->display();
	p=&ch1;
	p->display();
	p=&ch2;
	p->display();
}
