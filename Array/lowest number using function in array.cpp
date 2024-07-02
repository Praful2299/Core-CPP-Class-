#include<iostream>
using namespace std;

void lowest(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Enter number"<<i+1<<":";
		cin>>a[i]; 
	}
	for(int i=1;i<n;i++){  //here we start loop from i=1 because in below if(condition) we want to compare.
		if(a[0]>a[i])
		a[0]=a[i];
	}
	cout<<"-------------------------------------"<<endl;
	cout<<"Lowest number :"<<a[0];
}
int main(){
	int size;
	cout<<"Total numbers of element:";
	cin>>size;
	int a[size];
	lowest(a,size);
}
