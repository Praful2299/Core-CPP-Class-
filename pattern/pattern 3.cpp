#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j==1 ||i==5 ||(j==2 && i>1) ||(j==3 && i>2)||(j==4&&i>3) ){
				cout<<i;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
