#include<iostream>
using namespace std;

void even(int a[],int n){
	for(int i=0;i<n;i++){
	cout<<"Enter number "<<i+1<<":";
	cin>>a[i];
	}
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Even numbers among entered numbers are as follow:-"<<endl;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<a[i]<<endl;
		}
	}
	
}

int main(){
	int size;
	cout<<"Total number of elements:";
	cin>>size;
	int a[size];
	even(a,size);
}
