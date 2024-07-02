#include<iostream>
using namespace std;

int fact(int n){
	if(n==1||n==0)                    //this is the exit point
	return 1;
	else if(n<0){
		cout<<"Factorial of negative number is not possible";
		return 0;
	}
	else
	 return n+fact(n-1);
}

int main(){
	int result=fact(5);
	cout<<result;
}
