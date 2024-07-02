#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number you want table of:";
	cin>>n;
	for(int i=10;i>=1;--i){
		cout<<n*i<<endl;
	}
}
