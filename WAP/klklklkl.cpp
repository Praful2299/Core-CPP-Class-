#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	char ch;
	cout<<"Enter two positive number:";
	cin>>n1>>n2;
	if(n1>n2){
		cout<<"The bigger no. is :"<<n1;
	}
	else{
		cout<<"the bigger number is:"<<n2;
	}
	
	cout<<"DO YOU WISH TO CONTINUE?";
	cin>>ch;
	if(ch=='y'||ch=='Y'){
		continue;
	}	
}
