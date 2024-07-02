#include<iostream>
using namespace std;

class Bankac{
	public:
	double balance=1000,depos=0,withdr=0;

	
		virtual void deposit()=0;
		virtual void withdraw()=0;
		virtual void display()=0;
};
class Savingac:public Bankac{
	public:
	double bal,depo,with;
	Savingac(){
		bal=balance;
	}
	void deposit(){
		cout<<"Enter amount to deposit:";
		cin>>depo;
		bal=bal+depo;
	}
	void withdraw(){
		cout<<"Enter amount to withdrawl:";
		cin>>with;
		if(with<bal){
			bal=bal-with;
		}
		else{
			cout<<"Insufficient funds";
		}
	}
	void display(){
		cout<<"Available balance:"<<bal;
	}
};

int main(){
	Bankac *b;
	Savingac s;
	b=&s;
	b->deposit();
	b->withdraw();
	b->display();
}
