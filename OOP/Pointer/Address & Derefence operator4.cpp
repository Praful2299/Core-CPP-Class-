#include<iostream>
using namespace std;

int main(){
	int a=90,b=45,*p1,*p2;
	p1=&a;
	
	cout<<"Address of a:"<<p1<<endl;
	cout<<"Data at a:"<<*p1;
}
