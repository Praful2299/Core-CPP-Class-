#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1||j==1||(i==2&&j<5)||(i==3&&j<4)||(i==4&&j<3)  ){
				cout<<j;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
