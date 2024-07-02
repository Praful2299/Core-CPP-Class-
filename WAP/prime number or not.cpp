//WAP to determine whether a number pass by a user is a prime number or not
#include<iostream>
using namespace std;

int main(){
	int n,flag=0;
	cout<<"enter number:";
	cin>>n;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Prime number";
	}
	else{
		cout<<"Not a Prime Number";
	}
	
}
