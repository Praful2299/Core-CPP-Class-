#include<iostream>
using namespace std;

int reverse_dig(int a){
	int last,reverse=0;
	while(a>0){
		last=a%10;
		reverse=reverse*10+last;
		a=a/10;
	}
	return reverse;
}

int main(){
	int num;
	cout<<"Enter a digit:";
	cin>>num;
	cout<<reverse_dig(num);
}
