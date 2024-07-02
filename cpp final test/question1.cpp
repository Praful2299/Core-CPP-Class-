#include<iostream>
using namespace std;

class Bank{
	public:
		int accountnumber,balance;
		
		Bank(int acn,int bal){
			accountnumber=acn;
			balance=bal;
		}
		
		void withdraw(){
			int withdraw;
			cout<<"Enter amount to withdraw:";
			cin>>withdraw;
			balance=balance-withdraw;
		}
		
		void deposit(){
			int deposit;
			cout<<"Enter amount tpo be depossited:";
			cin>>deposit;
			balance=balance+deposit;
		}
		
		void curwntbalance(){
			cout<<"Available balance:"<<balance<<endl;
		}
	
};




int main(){
	Bank b(9009,56850);

	b.curwntbalance();
	b.withdraw();
	b.curwntbalance();
	b.deposit();
	b.curwntbalance();
	
}
