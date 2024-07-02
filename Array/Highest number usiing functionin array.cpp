#include<iostream>
using namespace std;

void highest(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[0]<a[i])
		a[0]=a[i];
	}
	cout<<"-------------------------------"<<endl;
	cout<<"Highest number :"<<a[0];
}


int main(){
	int size;
	cout<<"total number of elements:";
	cin>>size;
	int a[size];
	highest(a,size)	;
}
