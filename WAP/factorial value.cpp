#include<iostream>
using namespace std;

int main(){
	int n,product=1;
	cout<<"Enter a number to find its factorial value:";
	cin>>n; //5
	for(int i=n;i>=1;i--){
		product=product*i;
	}
	cout<<product;
}
