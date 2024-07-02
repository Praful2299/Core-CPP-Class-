#include<iostream>
using namespace std;

class Person{
	string name;
	int age;
	
	public:
		
		Person(){
			cout<<"Enter your name and age:";
			cin>>name>>age;
		}
		
		Person(string n,int a){
			name=n;
			age=a;
		}
		
//		Person(Person &obj){
//			name=obj.name;
//			age=obj.age;
//		}
		
		void display(){
			cout<<name<<" "<<age<<endl;
		}
};

int main(){
	Person p1;
	p1.display();
	Person p2("Praful",24);
	p2.display();
	Person p3=p2;  // implicitly create a copy constructor //call by value  //p3(p2)
	p3.display();
}
