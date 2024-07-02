#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=2;i++){
		cout<<"Outer loop iteration number :"<<i<<endl;
		for(int j=1;j<=4;j++){
			cout<<"inner loop iteration number :"<<j<<endl;
		}
	}
}
