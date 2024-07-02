#include<iostream>
using namespace std;

string palindrome(int a){
	int temp=a,last,reverse=0;
	while(a>0){
		last=a%10;
		reverse=reverse*10+last;
		a=a/10;
	}
	if(temp==reverse){
		return "Yes it is a palindrome number";
	}
	else{
		return "No";
	}
}

int main(){
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<palindrome(num);
}
