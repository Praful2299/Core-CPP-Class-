#include<iostream>
using namespace std;

int hcf(){
	int n1,n2,small,flag=0;
	cout<<"Enter any two number to find hcf:";
	cin>>n1>>n2;
	n1>n2?small=n2:small=n1;
	for (int i=small;i>=2;i--){
		if(n1%2==0 && n2%2==0){
			return i;
			flag=1
			break;	
		}
	}
}
int main(){
	cout<<hcf();
}
