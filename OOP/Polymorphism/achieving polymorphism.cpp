#include<iostream>
using namespace std;

void add(int a,int b){
	cout<<"Addition:"<<a+b<<endl;
}
void add(double a,int b){
	cout<<"Addition:"<<a+b<<endl;
}
void add(int a,int b,int c){
	cout<<"Addition:"<<a+b+c;
}

int main(){
	add(4,5);  //according to f() linkage---> compile time par hi link ho gya(int int)
	add(4.5,11);
	add(4,5,6);
}
