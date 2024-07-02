#include<iostream>
using namespace std;

class A{
	void privatef()
	{cout<<"I am private member";
	}
	
	public:
		void publicf()
		{
			cout<<"I am a public member";
			privatef();						// here we call private fn in public access specifier to call private fn in main fn.
			protectedf();					// here we call protected fn in public access specifier to call protected fn in main fn.
		}
		
	protected:
		void protectedf()
		{
			cout<<"I am a protected member";
		}
};

int main(){
	A a;
	a.publicf();
}
