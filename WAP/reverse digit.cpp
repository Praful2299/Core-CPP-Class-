#include<iostream>
using namespace std;

int main(){
	int dig,reverse_dig=0;
	cout<<"Enter a number you want reverse:";  //25
	cin>>dig;
	while(dig!=0){
		int number=dig%10; //number =5,2
		reverse_dig=reverse_dig*10+number; // reverse dig=5,52
		dig=dig/10.0; //2,0
	}
	cout<<reverse_dig;
}
