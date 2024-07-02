#include<iostream>
using namespace std;

void bubble(int a[],int size){
	int temp;
	for(int i=0;i<size-1;i++){    //number of passes
		for(int j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){                    //for i=0 , j=5-0-1=4   //for i=1 , j=5-1-1=3
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(){
	int ar[6]={87,89,-5,1,45,75};
	for (int i=0;i<6;i++){
		cout<<ar[i]<<" ";            //esehi kra dikhane ke liye
	}
	
	bubble(ar,6);
		cout<<endl;
		for (int i=0;i<6;i++){
		cout<<ar[i]<<" ";            
	}
}
