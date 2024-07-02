#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=5;j++){
			if((j==3&&i!=2)||(j==1&&i>2)||(j==5&&i>2)||(i==2&&j!=1&&j!=3&&j!=5)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
