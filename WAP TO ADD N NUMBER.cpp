//Wap to add n natural numbers starting from 1.

#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter Range:  ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i==n){
			cout<<i<<"=";
		}
		else{
			cout<<i<<"+";
		}
		sum=sum+i;
	}
	cout<<sum;
}

//we can do it without applying if-else condition
//alternate

//int main() {
//int n,sum=0;
//cout<<"enter range";
//cin>>n
//for(int i=1;i<n;i++)
//cout<<i<<"+";
//sum=sum+i;
//}
//sum=sum+n;
//cout<<n<<"="<<sum";
//}

