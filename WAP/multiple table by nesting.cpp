#include<iostream>
using namespace std;

int main(){
	int lower,upper;
	cout<<"Enter lower and upper limit:";
	cin>>lower>>upper;
	
	for(int j=lower;j<=upper;j++){
		for(int i=1;i<=10;i++){
			cout<<j<<"x"<<i<<"="<<j*i<<endl;
		}
		cout<<"/n===============================/n"<<endl;
	}
}
