#include<iostream>
using namespace std;

int main(){
	int a=90,b=48,*p1,*p2;
	p1=&a;
	p2=&b;
	
	if(*p1>*p2){
		cout<<"Greatest among them:"<<*p1;
	}
	else{
			cout<<"Greatest among them:"<<*p2;
	}
}
