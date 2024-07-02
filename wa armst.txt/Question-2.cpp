#include<iostream>
using namespace std;

int main(){
	int n,range;
	cout<<"Enter the number whose multiplication table needed:";
	cin>>n;
	cout<<"Enter the range:";
	cin>>range;
	for(int i=1;i<=range;i++){
		cout<<n*i<<endl;;
	}
}
