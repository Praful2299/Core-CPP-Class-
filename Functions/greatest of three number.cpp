/* WAP to find the greatest number among 3 numbers using function.
parameter-->3
return-->Greatest number*/

#include<iostream>
using namespace std;

int bigger(int a,int b,int c)  //formal parameter
{
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else{
		return c;
	}
}

int main(){
	int n1,n2,n3;
	cout<<"Enter 3 numbers:";
	cin>>n1>>n2>>n3;  //actual parameter
	cout<<bigger(n1,n2,n3)<<endl;
	
	int result=bigger(n1,n2,n3);
	cout<<result;
}




