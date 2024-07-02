#include<iostream>
using namespace std;

void selection(int a[],int size){
	int temp,min_index;
	for(int i=0;i<size-1;i++){
		min_index=i;
		for(int j=i+1;j<size;j++){
			if(a[j]<a[min_index]){
				min_index=j;
			}
		}
		temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
	}
}

int main(){
	
	
	int ar[5]={45,54,6,5,4};
	
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	
	selection(ar,5);
	cout<<endl;
		for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
}
