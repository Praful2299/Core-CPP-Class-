#include<iostream>
using namespace std;

int main(){
	int n,product=1,result;
	char ch;
	
	while(ch!='n'){
		cout<<"ENTER A NUMBER YOU WANT FACTORIAL OF:";
		cin>>n;
		for(int i=n;i>=1;i--){
		result=product*i;
		
	}
	cout<<"factorial of "<<n<<" is = "<<result<<endl;
	cout<<"DO YOU WISH TO TRY AGAIN(y/n):";
	cin>>ch;
	if(ch=='y'){
		continue;
	
	}
	else{
		cout<<"THANK YOU FOR USING OUR SERVICE";
	}
	
}
}
