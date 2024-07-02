#include<iostream>
using namespace std;

void bubblesort(int a[],int size){
	int temp;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	int ar[5]={4,87,85,98,3};
	cout<<"Array before sorting : ";
	for (int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	bubblesort(ar,5);
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
}
