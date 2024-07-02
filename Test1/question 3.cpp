#include<iostream>
using namespace std;

int main(){
	int range,sum=0,n1=0,n2=1,n3;
	cout<<"Enter Range:";
	cin>>range;
	cout<<n1<<" "<<n2<<" ";
	for(int i=0;i<range-2;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}
	
}
