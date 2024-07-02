#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter range:";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	cout<<"sum of all even numbers from 1 to"<<n<<"="<<sum;
}
