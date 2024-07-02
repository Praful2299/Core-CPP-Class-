//WAP to create a menu driven program having choices
//R--> area of rectangle
//C--> aream of circle
//E-->Exit

#include<iostream>
using namespace std;

int main(){
	int l,b,rad;
	char ch;
	
	do{
		cout<<"\n=======AREA FINDER=======\n";
		cout<<"R for rectangle\n";
		cout<<"C for circle\n";
		cout<<"E for exit\n";
		cout<<"ENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch){
			case 'r':
			case 'R': cout<<"Enter Lenght and Breadth:";
			          cin>>l>>b;
			          cout<<"Area of Rectangle:"<<l*b;break;
			case 'c':
			case 'C': cout<<"Enter Radius:";
			          cin>>rad;
			          cout<<"Area of Circle:"<<3.14*rad*rad;break;
			case 'E': cout<<"THANK YOU FOR CHOOSING OUR SERVICE";
			          break;
			default: cout<<"INVALID CHOICE \n PLEASE ENTER YOUR CHOICE AGAIN\n";
						break;
			          
		}} while(ch!='E');
	}

