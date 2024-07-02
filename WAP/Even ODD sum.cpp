////WAP to add even numbers and odd numbers seperately among n inuts(given by user)

#include<iostream>
using namespace std;

int main(){
	int n,num,even_sum=0,odd_sum=0;
	cout<<"Enter Range :";
	cin>>n;
	for(int i=1;i<=n;i++){
	cout<<"Enter Number"<<i<<":";
	cin>>num;
	if(num%2==0){
		even_sum=even_sum+num;
	}
	else if(n%2!=0){
		odd_sum=odd_sum+num;
	}
	}
	cout<<"Even Sum :"<<even_sum<<endl;
	cout<<"Odd Sum :"<<odd_sum;
}
