#include<iostream>
using namespace std;

int main(){
	int n,num,low;
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter number";
	cin>>num;
	low=num;
	for(int i=1;i<n;i++){
		cout<<"Enter number";
		cin>>num;
		if(num<low){
			low=num;
		}
	}
	cout<<"Lowest Numbr:"<<low;
}
