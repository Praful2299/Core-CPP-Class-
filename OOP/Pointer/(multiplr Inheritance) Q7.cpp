#include<iostream>
using namespace std;

class Worker{
	protected:
		string name;
		int salary;
	public:
		Worker(string n,int s){
			name=n;
			salary=s;
		}
	void display(){
		cout<<"Name: "<<name<<"Salary: "<<salary<<endl;
	}
};

class Contact{
	protected:
		string address,mob;
	public:
		Contact(string a,string m){
			address=a;
			mob=m;
		}
		void display(){
			cout<<"Address: "<<address<<"Mobile No. :"<<mob<<endl;
		}
};

class Manager:public Worker,public Contact{
	public:
		string duties;
		Manager(string name,int salary,string address,string mob,string duty):Worker(name,salary),Contact(address,mob){
			duties=duty;
		}


void display(){
	cout<<"Name: "<<name<<"Salary: "<<salary<<endl;
	cout<<"Address: "<<address<<"Mobile: "<<mob<<endl;
	cout<<"Duties: "<<duties;}
};

int main(){
	Manager m("Praful",250000,"Bhopal","9009331507","To Perform Operations");
	m.display();
}
