#include<iostream>
using namespace std;

long long factorial(int a){
	long long product=1;
	for(int i=a;i>=1;i--){
		product=product*i;
	}
	return product;
}


int main(){
	int num;
	cout<<"Enter a number for getting factorial value:";
	cin>>num;
	cout<<factorial(num);
}
