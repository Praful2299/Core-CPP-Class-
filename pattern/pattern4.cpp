#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if((j==1&&i>5)||(j==3&&i<5)||(j==4&&i<4)||(j==5&&i<3)||(j==6&&i<2)){
				cout<<"*";
			}
			else if(j==2&&i<5){
				cout<<".";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
