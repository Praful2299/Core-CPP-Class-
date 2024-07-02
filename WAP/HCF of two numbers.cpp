//HCF of two numbers
#include<iostream>
using namespace std;

int main(){
	int n1,n2,small,flag=0;
	cout<<"Enter Two Numbers :";
	cin>>n1>>n2;
	n1>n2?small=n2:small=n1;
	for(int i=small;i>=2;i--){
		if(n1%2==0 && n2%2==0){
			cout<<"HCF:"<<i;
			flag=1;
			break;
		}
		
	}
	if(flag==0){
		cout<<"No HCF";
		
	}

}
