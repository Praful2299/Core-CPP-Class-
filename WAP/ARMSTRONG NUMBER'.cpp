//Armstrong Number
//while()
//153%10-->3 (Number seperate)
//153/10-->15
//15%10--->5
//15/10-->1

#include<iostream>
using namespace std;

int main(){
	int num,temp,sum=0,last;
	cout<<"Enter number:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum+(last*last*last);
		num=num/10;
	}
	if(temp==sum){
		cout<<"Yes it is a armstrong number";
	}
	else{
		cout<<"No it is not an armstrong number";
	}
	
	
}
