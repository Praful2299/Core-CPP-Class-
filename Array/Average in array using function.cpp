#include<iostream>
using namespace std;

void average(int a[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
		cout<<"Enter number"<<i+1<<":";
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		sum=sum+a[i];
	}
	cout<<"Average:"<<sum/n;
}

int main(){
	int size;
	cout<<"Total number of element:";
	cin>>size;
	int a[size];
	average(a,size);
}
