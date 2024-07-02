#include<iostream>
using namespace std;

class Bank {
	public:
		string name,address;
		long ac,contact;
		
		void input(){
			cout<<"Enter name of a/c holder";
			cin>>name;
			cout<<"Enter residence address";
			cin>>address;
			cout<<"Enter a/c number";
			cin>>ac;
			cout<<"Enter your contact number";
			cin>>contact;			
		}
		
		void display(){
			cout<<name<<endl<<address<<endl<<ac<<endl<<contact;
		}
};

int main(){
	Bank e;
	e.input();
	e.display();
}
