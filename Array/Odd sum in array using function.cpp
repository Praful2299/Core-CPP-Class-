#include<iostream>
using namespace std;

void odd_sum(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		cout<<"Enter number"<<i+1<<":";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
		sum=sum+a[i];
		}
	}
	cout<<"Sum of odd numbers among all numbers :"<<sum;	
}

int main(){
	int size;
	cout<<"Total numbers of element:";
	cin>>size;
	int a[size];
	odd_sum(a,size);
}
