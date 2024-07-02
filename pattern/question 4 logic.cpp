#include<iostream>
using namespace std;
int main(){
	char ch=65;
	for(int i=65;i<=69;i++){
		for(int j=65;j<=i;j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	
}
