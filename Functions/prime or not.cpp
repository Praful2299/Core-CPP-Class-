#include<iostream>
using namespace std;

string prime(){
	int num,flag=0;
	cout<<"Enter a number to check it is prime or not:";
	cin>>num;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		return "YES";
	}
	else{
		return "NO";
	}
}

int main(){
	cout<<prime();
}
