#include<iostream>
using namespace std;

class Bank{
	
private:
	char name[20];
	long acc_no;
	string acc_type;
	int amount;
	string pass;
	
	public:
		Bank(){
			cout<<"Enter your name : ";
			cin.getline(name,50);
			cout<<"A/c no. : ";
			cin>>acc_no;
			cout<<"Enter A/c Type (Savings or Current): ";
			cin>>acc_type;
			cout<<"Enter your password : ";
			cin>>pass;
			cout<<"Enter opening A/c balance : ";
			cin>>amount;
			cout<<"----------------------------------------"<<endl;
		}
		
		void deposit(){
			string cpassword;
			long dep;
			cout<<"Please enter password again to deposit: ";
			cin>>cpassword;
			if(cpassword==pass){
				cout<<"Enter an amount you want to deposit in your account: ";
				cin>>dep;
				cout<<"Deposit is successfull"<<endl<<"Updated balance : "<<(amount=amount+dep)<<endl;
			}
			else{
				cout<<"Wrong Password";
			}
			cout<<"---------------------------------------"<<endl;
		}
		
		void withdraw(){
			string wpass;
			long with;
			cout<<"Enter your password to withdraw your amount : ";
			cin>>wpass;
			if(wpass==pass){
				cout<<"Enter withdrawal amount : ";
				cin>>with;
				cout<<"Your transaction is successful"<<endl<<"Updated balance: "<<(amount=amount-with)<<endl;
			}
			else if(with>amount){
				cout<<"Insufficient Balance";
			}
			cout<<"--------------------------------------"<<endl;
		}
		
		void display(){
			cout<<"----------------------------------------"<<endl;
			cout<<"Name of A/c holder : "<<name<<endl<<"Available Balance : "<<amount<<endl;
		}
};

int main(){
	Bank c1;
	c1.deposit();
	c1.withdraw();
	c1.display();

}
