/*WAP to search for a element in a array of n numbers
firstly u have to create an array, then apply searching operation */

#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	int a[size];
	
	for(int i=0;i<size;i++){
		cout<<"Enter the value for index "<<i<<" ";
		cin>>a[i];
	}
cout<<"-----------------------------------------------------------------------------------"<<endl;
	
	for(int i=0;i<size;i++){
		cout<<"The value at index "<<i<<" :"<<a[i]<<endl;
	}
}
