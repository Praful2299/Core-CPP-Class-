#include <iostream>
using namespace std;

int main(){
	int number1=5;
	int number2=3;
	int number3=2;
	number1=number2++;
	number2=--number3;
	cout <<"Number1---->"<<number1 <<endl;
	cout<<number2<<endl;
	cout<<++number3;
	return 0;
}
