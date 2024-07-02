#include<iostream>
using namespace std;

void table(int num,int n){
	int result;
	if(n>10){
		return ;
	}
	else 
		result=num*n;
		cout<<result<<endl;
		table(num,n+1);
	
}
int main(){
	table(13,1);
}
