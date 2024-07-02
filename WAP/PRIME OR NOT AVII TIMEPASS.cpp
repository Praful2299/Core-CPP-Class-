#include<iostream>
using namespace std;

int main(){
	int n,flag=0;
	cout<<"Enter a number:";
	cin>>n;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"YES IT IS A PRIME NUMBER";
	}
	else{
		cout<<"NO IT IS NOT A PRIME NUMBER";
	}
}
