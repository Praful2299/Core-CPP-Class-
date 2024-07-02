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
			cout<<"Enter a number at index "<<i<<j<<":";
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<c;i++){    
		for(int j=0;j<r;j++){
			sum=sum+a[j][i];
			
		}
	}
	cout<<"colum sum--->"<<sum<<endl;
	sum=0;
}
