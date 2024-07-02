#include<iostream>
using namespace std;

void fibonnaci(){
	int n1=0,n2=1,n3,range;
	cout<<"Enter range to print fibonacci series:";
	cin>>range;
	cout<<n1<<" "<<n2<<" ";
	for (int i=1;i<=range-2;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}
	cout<<endl;
}

int main(){
	fibonnaci();
}
