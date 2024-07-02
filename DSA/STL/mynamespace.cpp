#include<iostream>
using namespace std;

namespace A{
	class Employee{
		int eid;
		string name;
		
		public:
			Employee(int a , string n){
				eid=a;
				name=n;
			}
			
			void display(){
				cout<<"Name: "<<name<<endl<<"EID: "<<eid<<endl;
			}
	};
}
