#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter size of row:";
	cin>>r;
	cout<<"Enter size of colum:";
	cin>>c;
	int a[r][c];
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter a number for index "<<i<<j<<":";
			cin>>a[i][j];
		}
	}
	cout<<"--------------------------------------------------"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Number at index "<<i<<j<<"="<<a[i][j]<<endl;
			
		}
	}
}
