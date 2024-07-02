#include<iostream>
using namespace std;

void selection_sort(int a[],int size){
	int temp,min_index;
	
	for (int i=0;i<size-1;i++){
		min_index=i;               //min index=0
		for (int j=i+1;j<size;j++){
			if(a[j]<a[min_index]){     
				min_index=j;	  //min index=1
			}
		}
			int temp=a[i];         // temp=5
				a[i]=a[min_index];     // a[0]=4
				a[min_index]=temp;	   //a[1]=5
	}
}

int main(){
	int ar[5]={5,4,7,8,2};
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	selection_sort(ar,5);
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
}
