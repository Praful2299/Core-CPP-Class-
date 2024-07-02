#include<iostream>
using namespace std;

void table(int n,int r ){
	for (int i=1;i<=r;i++){
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}

int main(){
	int num,range;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Range:";
	cin>>range;
	table(num,range);
}
