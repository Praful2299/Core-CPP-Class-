#include<iostream>
using namespace std;

int main(){
	int n;
	double sum=0.0;
	cout<<"Enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<sum;
}
