#include <iostream>
using namespace std;

int main(){
	
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	
a=++b;
b=c++;
c=++d;
d=a++;

cout<<"A :"<<a<<endl;
b=a++;
cout<<"B :"<<b<<endl;
cout<<"C :"<<c<<endl;
cout<<"D :"<<d;
return 0;
}
