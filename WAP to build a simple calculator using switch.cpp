#include <iostream>
using namespace std;

int main(){
	int a,b;
	char choice;
	cout<<"Enter any Two numbers:";
	cin>>a>>b;
	cout<<"Please choose any arthemetic operation(+,-,*,/,%):";
	cin>>choice;
	
	switch(choice){
		
		case'+': cout<<"Addition:"<<a+b;
		break;
		case'-': cout<<"Substraction:"<<a-b;
		break;
		case'*': cout<<"Product:"<<a*b;
		break;
		case'/': cout<<"Division:"<<a/(float)b;
		break;
		case'%': cout<<"Modulus:"<<a%b;
		break;
		default: cout<<"invalid operation";
		
	}
}
