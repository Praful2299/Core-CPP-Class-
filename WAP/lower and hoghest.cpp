#include<iostream>
using namespace std;

int main(){
	int n,num1,high,low;
	cout<<"Enter Limit:";
	cin>>n;
	cout<<"Enter number";
	cin>>num1;
	high=num1;
	cout<<"Enter number";
	cin>>num1;
	low=num1;
	for(int i=1;i>n;i++){
		cout<<"enter number:";
		cin>>num1;
		if(high>num1){
			high=num1;
		}
		else if(low>num1){
			low=num1;
		}
		
	}
	cout<<"Highest number:"<<high<<endl;
	cout<<"Lowest number:"<<low;  // there is some error 
	
}
