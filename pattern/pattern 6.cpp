#include<iostream>
using namespace std;

int main(){
	for(int i=5;i>=1;i--){
		for(int j=5;j>=1;j--){
			if((i==1&&j>4)||(i==2&&j>3)||(i==3&&j>2)||(i==4&&j>1)||(i==5)) {
				cout<<i;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
