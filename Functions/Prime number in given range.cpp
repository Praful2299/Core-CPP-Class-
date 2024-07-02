#include<iostream>
using namespace std;

void prime(int start ,int end){
	int flag=0;
	for(int j=start;j<=end;j++){
		if(j>0){
			flag=0;
		}
	for(int i=2;i<=j/2;i++){
		if(j%i==0){
			flag=1;
			break;
		}
		}
		if (flag==0){
			cout<<j<<" ";
		}
	}
	}


int main(){
	int startr,endr;
	cout<<"Enter starting range:";
	cin>>startr;
	cout<<"Enter ending range:";
	cin>>endr;
	cout<<"prime number from"<<startr<<" to "<<endr<<"are :";
	prime(startr,endr);
}
