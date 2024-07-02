//WAP TO SWAP THE VALUE OF TWO VARIABLE WITH EACH OTHER USING CALL BY REFERENCE METHOD.

#include<iostream>
using namespace std;

void swap(int *a ,int *b){        // callee f()
	cout<<"Before swap : First:"<<*a<<"Second:"<<*b<<endl;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	cout<<"After swap : First:"<<*a<<"Second:"<<*b<<endl;
}

int main(){            // caller main
	int n1=90,n2=80;
	swap(&n1,&n2);
	cout<<"After swap in main : First:"<<n1<<"Second:"<<n2;
}
