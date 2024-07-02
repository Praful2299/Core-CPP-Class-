#include<iostream>
using namespace std;

int isPalindrome(int n){
	int reverse=0;
	for(int i=n;i>0;i=i/10){
		reverse=reverse*10+i%10;
	}
	return (n==reverse);
}

void count(){
	int min,max;
	cout<<"Enter starting range:";
	cin>>min;
	cout<<"Enter Ending range:";
	cin>>max;
	for(int i=min;i<=max;i++){
		if(isPalindrome(i)){
			cout<<i<<endl;
		}
	}
}
int main(){
	count();
	return 0;
}


   

