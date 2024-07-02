#include<iostream>
using namespace std;

class Bank{
	public:
		int amount,balance=100;
		void addamount(){
			amount=100;
			balance=amount+balance;
			cout<<balance<<endl;
		}
		void addamount(int a){
			amount=a;
			balance=amount+balance;
			cout<<balance;
		}
};

int main(){
	Bank b;
	b.addamount();
	b.addamount(500);
}
