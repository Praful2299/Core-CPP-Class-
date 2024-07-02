#include<iostream>
using namespace std;

int main(){
	int n,high,num;
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter number:";
	cin>>num;
	high=num;
	for(int i=1;i<n;i++){
		cout<<"Enter number";
		cin>>num;
		if(num>high){
			high=num;
		}
	}
cout<<"highest vale:"<<high;	
}
