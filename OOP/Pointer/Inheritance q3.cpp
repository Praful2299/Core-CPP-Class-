#include<iostream>
using namespace std;

class Bankaccount{
	public:
		double amount=1000.00;
		void deposit(){
			double deposit;
			cout<<"Enter amount to deposit: ";
			cin>>deposit;
			cout<<"Available Amount ="<<amount+deposit<<endl;
		}
		void withdraw(){
			int with;
			cout<<"Enter amount to withdraw: ";
			cin>>with;
			cout<<"Available amount: "<<amount-with<<endl;
		}
};
class SavingAccount:public Bankaccount{
	
};
class CheckingAccount:public Bankaccount{
	
};

int main(){
	SavingAccount s;
	CheckingAccount c;
	s.deposit();
	s.withdraw();
	c.deposit();
	c.withdraw();
	
}
