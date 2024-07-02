#include<iostream>
using namespace std;

class Parent{
	void Private(){
		cout<<"I am private member";
	}
	
	public:
		void publicf(){
			cout<<"I am a public member";
			Private();
		}
	
	protected:
		void protectedf(){
			cout<<"I am a protected member";
		}
			};
	class Child : public Parent{
		public:
			void f(){
				protectedf();
			}
};

int main(){
	Child c;
	c.f();
	Parent p;
	p.publicf();
	
}
