#include<iostream>
using namespace std;

class BaseAbstractClass{
	public:
	virtual void f1()=0;
	virtual void f2(int a)=0;
	
	void display(){
		cout<<"i am a f() of abstract class can only be accessed by child class";
	}
};

class Derived: public BaseAbstractClass{
	void f1(){
		cout<<"implementation of f1() in derived class\n";
	}void f2(int a){
		cout<<"Implementation of f2() in derived class\n";
	}
	
};

int main(){
	BaseAbstractClass *base;
	Derived d;
	base=&d;
	base->f1();
	base->f2(3);
	base->display();
	}
