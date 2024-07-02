#include<iostream>

class Bankac{
	public:
		virtual void deposit(double amount)=0;
		virtual void withdrawl(double amount)=0;
		virtual void display()=0;
};
class savingac:public Bankac{
	private:
		int bal=1000;
	public:
		savnigac(int balance):Bankac(double balance)
	void deposit(double amount){
		bal=bal+amount;
	}
	void withdrawl(double amount){
		bal=bal-amount;
	}
	void display(){
	cout<<"Available balance:"<<bal;
	}
};

class checkingac:public Bankac{
	private:
	int bal=1000;
	public:
	void deposit(double amount){
		bal=bal+amount;
	}
	void withdrawl(double amount){
		bal=bal-amount;
	}
	void display(){
		cout<<"Available balance:"<<bal
	}
};

int main(){
	Bankac *base;
	savingac s1;
	base=&s1;
	base->deposit(15000);
}
