  //Fibonacci Series

#include<iostream>
using namespace std;

int main(){
	int n1=0,n2=1,n3,limit;
	cout<<"Enter Limit :";
	cin>>limit;
	cout<<n1<<" "<<n2<<" ";
	for(int i=1;i<=limit-2;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
}
