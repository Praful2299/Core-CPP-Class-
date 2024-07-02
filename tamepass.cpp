#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	int ar[size];
	for(int i=0;i<size;i++){
		cout<<"enter the value for index"<<i<<" :";
		cin>>ar[i];
	}
	for(int i=0;i<size;i++){
		cout<<"The value at index "<<i<<" :"<<ar[i]<<endl;
	}
}
