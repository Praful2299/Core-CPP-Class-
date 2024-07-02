#include<iostream>
using namespace std;

class Bank{
	private:
		string name;
		int account_num;
		double balance;
		
	public:
		Bank(string n,int i,double bal){
			name=n;
			account_num=i;
			balance=bal;
		}
		
		void display(){
			cout<<name<<" "<<account_num<<" "<<balance<<endl;
		}
		friend class PhonePe;
		
};

class PhonePe{
	public:
		void withdrawn(Bank &obj){
			int n;
			cout<<"Enter withdrawn amount:";
			cin>>n;
			obj.balance=obj.balance-n;
		}
		void changename(Bank &obj){
			string na;
			cout<<"Enter new name:";
			cin>>na;
			obj.name=na;
		}
}; 

int main(){
	Bank b("Praful",122,34590.90);
	b.display();
	PhonePe p;
	p.withdrawn(b);
	p.changename(b);
	b.display();
}
