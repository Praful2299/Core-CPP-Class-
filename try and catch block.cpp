//WAP TO FIND THE FACTORIAL OF NUMBER.
#include<iostream>
using namespace std;

int main(){
	int n,fact=1;
	cout<<"Enter a number:";
	cin>>n;
	
	try{
		if(n<0){
			throw n; // statement //exception raise
			}
			for(int i=n;i>=1;i--){
			fact=fact*i;
		}
		cout<<"Factorial of "<<n<<" :"<<fact;
		}
		
	catch(int a){
		cout<<"number "<<a<<"can't be negative";
	}
}
