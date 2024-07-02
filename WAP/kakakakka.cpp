#include<iostream>
using namespace std;

int getproduct(){
	int n,product=1;
	cout<<"Enter a number:";
	cin>>n;
	while(n!=0){
		product=product*(n%10);
		n=n/10;
	}
	return product;
}

int main(){
	cout<<getproduct();
}
