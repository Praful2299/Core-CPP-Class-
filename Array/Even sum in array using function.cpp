#include<iostream>
using namespace std;

void even_sum(int a[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			sum=sum+a[i];
		}
	}
	cout<<"Sum of even number among all numbers :"<<sum;
}

int main(){
	int size;
	cout<<"Total numbers of elements:";
	cin>>size;
	int a[size];
	even_sum(a,size);
}
