#include<iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"Function of class A";
		}
};

class B{
	public:
		void display(){
			cout<<"Function of class B";
		}
};

class C : public A,public B{
	
};

int main(){
	C obj;
	obj.A::display(); 		//if we directly call object of c then it will show error(this error or problem is also called diamond porblem) so we have to use scope resolution operator ::
	obj.B::display();
}
