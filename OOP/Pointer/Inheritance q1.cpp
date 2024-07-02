#include<iostream>
using namespace std;

class Person{
	public:
		string name,address;
		
	void input(){
			cout<<"Enter name :";
			cin>>name;
			cout<<"Enter address:";
			cin>>address;
			cout<<"Name: "<<name<<endl<<"Address: "<<address<<endl;
	}
};

class Students:public Person{
			
};

class Teachers:public Person{
	
};

int main(){
	Person *base;
	Students s1;
//	base->input();
	s1.input();
	Teachers t1;
//	base->input();
	t1.input();
}
