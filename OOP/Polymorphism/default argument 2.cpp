#include<iostream>
using namespace std;

void add(int a=0,int b=0,int c=0,int d=0){  //jitni bhi default value denge toh right most corner se dena start krenge!
	cout<<"Addition: "<<a+b+c+d;
}

int main(){
	add(2,3);
	add(4,5,6);
	add(1,2,3,4);
}
