#include<iostream>
using namespace std;

void table(int lower , int upper){
	for(int i=lower;i<=upper;i++){
		for(int j=1;j<=10;j++){
			cout<<i<<"x"<<j<<"="<<i*j<<endl;			
		}
		cout<<"==============================="<<endl;
	}
}

int main(){
	int l,u;
	cout<<"Enter lower range:";
	cin>>l;
	cout<<"Enter upper range:";
	cin>>u;
	table(l,u);
}
