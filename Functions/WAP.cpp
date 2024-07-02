/*WAP TO PRINT WHETHER A NUMBER IS ARMSTRONG NUMBER OR NOT 
PARAMETER-->INT
RETURN-->STRING(A MESSAGE'YES' OR 'NOT' */

#include<iostream>
using namespace std;

string armstrong(int num){
	int temp=num,last,sum=0;
	while(num>0){
		last=num%10;
		sum=sum+(last*last*last);
		num=num/10;
	}
	if(temp==sum){
		return "Yes";
	}
	else{
		return "No";
	}
	
}

int main(){
	cout<<armstrong(153)<<endl;
	cout<<armstrong(370)<<endl;
	cout<<armstrong(523);
}
