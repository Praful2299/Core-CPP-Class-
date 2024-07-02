#include<iostream>
using namespace std;

class A{
	void display_private(){
		cout<<"Function of class A(Private Member)";
	}
	
	public:
		void display_public(){
			cout<<"Function of class A(Public Member)";
		}
		
	protected:
		void display_protected(){
			cout<<"Function of class A(Protectd Member)";
		}
};

class B: public A{
	//protected-->display_protected()             public--->display_public()
	
	public:
		void xyz(){
			display_protected();
		} 
};

int main(){
	B obj;
	obj.xyz();
	return 0;
}
