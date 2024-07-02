#include<iostream>
using namespace std;

class Factorial{
	public:
		int num,product=1;
		Factorial(int n){
			num=n;
		}
		int fact(){
			for(int i=num;i>=1;i--){
				product=product*i;
			}
			return product;
		}
		
		void display(){
				cout<<"Factorial of "<<num<<": "<<product;
		}
};
int main(){
	Factorial f(5);
	f.fact();
	f.display();
}
