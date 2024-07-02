#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter Range:";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	cout<<"Here are the sum of odd numbers from 1 to "<<n<<"="<<sum;
}
