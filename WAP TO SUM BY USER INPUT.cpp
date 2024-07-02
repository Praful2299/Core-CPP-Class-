//wap to add numbers by user input
#include <iostream>
using namespace std;
int main(){
	int n,sum=0,num;
	cout<<"enter range  :";
	cin>>n;
	
	
	for(int i=1;i<=n;i++){
		cout<<"Enter number"<<i<<":";
		cin>>num;
		sum=sum+num;
	}
	cout<<"Sum:"<<sum;
}
