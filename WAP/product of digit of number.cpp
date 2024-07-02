#include<iostream>
using namespace std;
int main(){
	int n,last,product=1;
	cout<<"ENTER A NUMBER:";
	cin>>n;
	int temp=n;
	while(n>0){
		last=n%10;
		product=product*last;
		n=n/10.0;
	}
	cout<<"PRODUCT OF DIGITS OF NUMBER "<<temp<<" IS :"<<product;
}
