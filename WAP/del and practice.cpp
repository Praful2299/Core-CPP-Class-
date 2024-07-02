#include<iostream>
using namespace std;

int main(){
	int lower,upper,flag=0;
	cout<<"Enter 1st number"; //1
	cin>>lower;
	cout<<"Enter last number"; //5
	cin>>upper;
	for(int i=lower;i<=upper;i++){
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
	if(flag==0){
		cout<<i;
	}	
	}
	
}
