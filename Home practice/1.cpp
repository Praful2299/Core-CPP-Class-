#include<iostream>
using namespace std;

int main(){
	int n,last=0,reverse=0;
	cout<<"ENTER A POSITIVE INTEGER:";
	cin>>n;
	int temp=n;
	while(n!=0){
		last=n%10;
		reverse=reverse*10+last;
		n=n/10.0;
		
	}
	cout<<"THE REVERSE OF INTEGER "<<temp<<" is :"<<reverse<<endl;
	if(reverse==temp){
		cout<<"THE INTEGER "<<temp<<" IS PALINDROME";
	}
	else{
		cout<<"Integer "<<temp<<" is not a palindrome";
	}
	
}
