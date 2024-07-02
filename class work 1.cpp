# include<iostream>
using namespace std;

int main() {
	int a=80,b=34,c=1;
	b=a++; // b=80 , a=81
	c=++c; // c=2
	a=c++ + --b;  // ( we add or subtract from right to left)  2  + 79    , b=79 , c=3
	
	cout<<++a<<endl;  // a=82
	cout<<b<<endl;    //b= 79
	cout<<c;              // c= 3
	
	
	}
