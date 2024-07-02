#include<iostream>
using namespace std;

string armstrong(int a){
	int temp=a,last,sum=0;
	while(a>0){
		last=a%10;
		sum=sum+(last*last*last);
		a=a/10;
	}
	if(temp==sum){
		return "YES";
	}
	else{
		return "NO";
	}
}

int main(){
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<armstrong(num);
}
