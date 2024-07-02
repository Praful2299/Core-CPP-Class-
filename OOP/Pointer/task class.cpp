//WAP TO CREATE A ABSTRACT CLASS NAMED RBI HAVING PURE VIRTUAL FUNCTION - INTEREST_RATE(),ALSO DEFINE DERIVED CLASS SBI,PNB,BOB AND IMPLEMENT THE 
//INTEREST_RATE FUNCTION.

#include<iostream>
using namespace std;

class RBI{
	public:
		virtual void interest_rate()=0;
};

class SBI : public RBI{
	void interest_rate(){
		cout<<"Interest rate of SBI = 7.5% \n";
	}
};

class PNB : public RBI{
	void interest_rate(){
		cout<<"Interest rate of PNB = 6.5% \n";
	}
};

class BOB : public RBI{
	void interest_rate(){
		cout<<"Interest rate of BOB = 8.5% \n";
	}
};

int main(){
	RBI *base;
	SBI s;
	PNB p;
	BOB b;
	base=&s;
	base->interest_rate();
	base=&p;
	base->interest_rate();
	base=&b;
	base->interest_rate();
}
