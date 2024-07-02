#include<iostream>
using namespace std;

void odd(int a[],int n){
	for (int i=0;i<n;i++){
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"-----------------------------------"<<endl;
	cout<<"odd numbers among all the entered numbers are as follows:-";
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			cout<<a[i]<<endl;
		}
	}
}

int main(){
	int size;
	cout<<"Total number of element:";
	cin>>size;
	int a[size];
	odd(a,size);
}
