#include<iostream>
using namespace std;

int main(){
	int n,num,temp,sum=0,last;
	cout<<"Enter range:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum+(last*last*last);
		num=num/10;
	}
	for(int i=1;i<=)
	if(temp==sum){
		cout<<"Yes it is a armstrong number";
	}
	else{
		cout<<"No it is not an armstrong number";
	}
	
	
}
