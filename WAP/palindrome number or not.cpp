#include<iostream>
using namespace std;

int main(){
	int n,n1,temp,last,reverse=0;
	cout<<"ENTER A POSITIVE NUMBER:";
	cin>>n;
	temp=n;
	while(n>0){
		last=n%10;
		reverse=reverse*10+last;
		n=n/10.0;
	}
	cout<<"THE REVERSE NUMBER OF "<<temp<<" IS "<<reverse<<endl;
	if(temp==reverse){
		cout<<temp<<" IS A PALINDROME NUMBER";
	}
	else{
		cout<<temp<<" IS NOT A PALINDROME NUMBER";
	}
}
