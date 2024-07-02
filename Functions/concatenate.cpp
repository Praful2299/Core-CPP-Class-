#include<iostream>
using namespace std;

void full_name(string name,string surname){
	cout<<name<<" "<<surname;
}

int main(){
	string nm,sur;
	cout<<"Enter Your Name:";
	cin>>nm;
	cout<<"Enter Your Last name:";
	cin>>sur;
	full_name(nm,sur);
}
