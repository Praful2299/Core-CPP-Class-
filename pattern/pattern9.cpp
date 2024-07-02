#include<iostream>
using namespace std;

int main(){
	for(char i='A';i<='E';i++){
		for(char j='A';j<='E';j++){
			if(i=='E'||(i=='D'&&j<'E')||(i=='C'&&j<'D')||(i=='B'&&j<'C')||(i=='A'&&j<'B')){
				cout<<i;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
