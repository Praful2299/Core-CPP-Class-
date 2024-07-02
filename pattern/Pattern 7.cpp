#include<iostream>
using namespace std;

int main(){
	int n=1;
	for(int i=1;i<=5;i++){
		for (int j=1;j<=5;j++){
				if((i==1&&j<2)||(i==2&&j<3)||(i==3&&j<4)||(i==4&&j<5)||i==5){
				
				cout<<n<<" ";
				n++;
		}
		
	}
	cout<<endl;
}
}
