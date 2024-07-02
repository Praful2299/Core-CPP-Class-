#include<iostream>
using namespace std;

void insertion(int a[],int n){
	int key ,j;
	
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		
		while(j>=0 && key<a[j]){
			a[j+1]=a[j];
			j--;	
		}
		j++;
		a[j]=key;
	}
}

int main(){
	int ar[5]={45,56,84,98,7};
	
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	
	insertion(ar,5);
	cout<<endl;
		for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	
}
