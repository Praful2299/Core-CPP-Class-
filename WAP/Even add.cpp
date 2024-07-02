//WAP to addd even numbers among n inputs(given by user)

#include<iostream>
using namespace std;

int main(){
	int n,num,even_sum=0;
	cout<<"Enter range :";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Enter Number "<<i<<":";
		cin>>num;
		if(num%2==0){
			even_sum=even_sum+num;
			
		}
	}
	cout<<"even sum:"<<even_sum;
}
