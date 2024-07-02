#include<iostream>
using namespace std;

class A{
	public:
	virtual	void display(){
			cout<<"Function of class A";
		}
};

class B:public A{
	public:
	void display(){
		cout<<"Function of class B";
	}
};

class C:public B{
	
};

int main(){
	C *obj;
	A e;
	obj=&e;
	obj->display();
//	obj.display();  //Locality of refference + method over riding (jese hi hum c ke object ko call karenge pehle woh b ke pass jaake check karega mila toh sidha print kr dega aur kabhi b ke pass nahi nikla toh a ke pass jaake check krega waha mila toh print karega warna error de dega)
}
