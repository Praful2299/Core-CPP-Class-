#include<iostream>
using namespace std;

int main(){
	int base,power,product=1;
	cout<<"Enter the number:";
	cin>>base;
	cout<<"Enter the power:";
	cin>>power;
	for(int i=1;i<=power;i++){
		product=product*base;
	}
	cout<<product;
}
