#include<iostream>
using namespace std;

void selection(int a[],int size){
	int min_index,temp;
	
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
	int ar[5]={77,5,7,8,78};
	
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	
	selection(ar,5);
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
}
