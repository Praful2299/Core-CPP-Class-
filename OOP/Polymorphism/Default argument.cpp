#include<iostream>
using namespace std;

//Default agrument

void marksheet(int a , int b , int c , string Uname="RGPV"){
	cout<<Uname<<" Examination\n";
	cout<<"Subject1:"<<a<<endl;
	cout<<"Subject2:"<<b<<endl;
	cout<<"Subject3:"<<c<<endl;
}

int main(){
	marksheet(34,35,68);
	marksheet(78,79,81,"BU BHOPAL");
}
