#include<iostream>
using namespace std;

int main(){
	int n,last=0,reverse=0,temp;
	cout<<"ENTER A DIGIT YOU WANT TO REVERSE:"; //154
	cin>>n;
	temp=n;
	while(n>0){
		last=n%10; 
		reverse=reverse*10+last; 
		n=n/10.0; 
		
	}
	cout<<"Original Number:"<<temp<<endl;
	cout<<"Reverse number:"<<reverse<<endl;
	cout<<"Add:"<<temp+reverse;
}
