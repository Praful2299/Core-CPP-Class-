#include<iostream>
using namespace std;

int main(){
	int n,countp,countn,countz;
	char op;
	cout<<"Enter a number";
	cin>>n;
	while(1){
		if(n>0){
			countp++;
		}
		else if(n<0){
			countn++;
		}
		else{
			countz++;
		}
		cout<<"Do you wish to continue 'y'or'n' :";
		cin>>op;
		if(op=='y'){
			continue;
		}
		else if(op=='n'){
			cout<<"Thank you for choosing our service";
			break;
		}
	}
	cout<<"postive count"<<countp<<endl;
		cout<<"negative count"<<countn<<endl;
			cout<<"zero count"<<countz;
}
