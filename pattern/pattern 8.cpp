#include<iostream>
using namespace std;

int main(){
	for(char i='A';i<='E';i++){
		for(char j='A';j<='E';j++){
			if(i=='E'||j=='A'||(j=='B'&&i>'A')||(j=='C'&&i>'B')||(j=='D'&&i>'C')){
				cout<<j;
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}
