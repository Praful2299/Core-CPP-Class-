#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter any number";
	cin>>num;
	
	switch(num%2){
	case 1:cout<<num<<"is even";
			break;
			default:cout<<num<<"is odd";
			break;
		}
}
