 #include<iostream>
using namespace std;

class Person{
	public:
	string name,address;
};
class Contact{
	public:
	String email,pno;
};

class student:public Person{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter address:";
	cin>>address;
	cout<<"Name: "<<name<<endl<<"Address: "<<address<<endl;
		
};

class student:public Contact{
	cout<<"Enter email:";
	cin>>email;
	cout<<"Enter Contact no. :";
	cin>>pno;
	cout<<"Email: "<<email<<endl<<"Contact number: "<<pno<<endl;
};

int main(){
	student s;
	s.
}
