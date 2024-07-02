#include<iostream>
using namespace std;

void swap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Enter number for index "<<i<<":";
		cin>>a[i];	
	}
	int temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	cout<<"AFTER SWAPPING FIRST AND LAST ARRAY"<<endl;

	for(int i=0;i<n;i++){
		cout<<"Number at index "<<i<<":"<<a[i]<<endl;
	}
}

int main(){
	int size;
	cout<<"Total number of elements:";
	cin>>size;
	int a[size];
	swap(a,size);
}
