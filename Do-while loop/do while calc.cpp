#include<iostream>
using namespace std;

int main(){
	int n,num1,num2;
	do{
		cout<<"\n_____________CALCULATOR__________\n";
		cout<<"1 for addition\n";
		cout<<"2 for substraction\n";
		cout<<"3 to exit\n";
		cout<<"ENTER YOUR CHOICE:";
		cin>>n;
		switch(n){
			case 1:cout<<"Enter Two numbers:";
					 cin>>num1>>num2;
					 cout<<num1<<"+"<<num2<<"="<<num1+num2;
					 break;
					 
			case 2: cout<<"Enter any two numbers:";
					  cin>>num1>>num2;
					  cout<<num1<<"-"<<num2<<"="<<num1-num2;
					  break;
					  
			case 3: cout<<"THANK YOU FOR CHOOSING OUR SERVICES";
			break;
		}
	} while(n!=3);
}
