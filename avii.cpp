#include<iostream>
using namespace std;

int mian(){
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if((j==1&&i==1)||(j==3&&i>2)||(j==4&&i>3)||(j==5&&i>4)||(j==6&&i==6)){
				cout<<"*";
			}
			else if(j==2&&i>2){
				cout<<".";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
