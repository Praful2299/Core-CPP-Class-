#include<iostream>
using namespace std;

class Complex{
	private:
		int real,imaginary;
	public:	
		Complex(int a,int b){
			real=a;
			imaginary=b;
		}
		
		Complex operator +(Complex obj){
			Complex temp(0,1);
			temp.real=real+obj.real;
			temp.imaginary=imaginary+obj.imaginary;
			return temp;
		}
		
		void display(){
			cout<<real<<"+"<<"i"<<imaginary;
		}
};

int main(){
	Complex c1(10,20),c2(30,40),c3(50,60);
	Complex c4=c1+c2+c3;
	c4.display();
}
