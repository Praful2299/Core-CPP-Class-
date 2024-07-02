#include<iostream>
using namespace std;
int main(){
	int sum_9=0,cn_9=0;
	cout<<"\nNUMBER AND SUM OF NUMBER FROM 100 TO 200 WHICH ARE DIVISIBLE BY 9\n";
	cout<<"======================================================================\n";
	for(int i=100;i<=200;i++){
		if(i%9==0){
			sum_9+=i;
			cn_9++;
		}
	}
	cout<<"Count of number divisible by 9:"<<cn_9<<endl;
	cout<<"Sum of number divisible by 9:"<<sum_9;
}
