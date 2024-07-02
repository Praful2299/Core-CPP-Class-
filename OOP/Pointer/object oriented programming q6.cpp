#include<iostream>
using namespace std;

class Highest{
	public:
	int n1,n2,n3,highest,lowest;
	
	Highest(int num1,int num2,int num3){
		n1=num1;
		n2=num2;
		n3=num3;
	}
	
	void high(){
		if(n1>n2 && n1>n3){
			highest=n1;
		}
		else if(n2>n1 && n2>n3){
			highest=n2;
		}
		else{
			highest=n3;
		}
	}
	
	void display(){
		cout<<"Highest number: "<<highest;
	}
};

class Lowest:public Highest{
	public:
	Lowest(int number1,int number2,int number3):Highest(n1,n2,n3){
	}
	
	void low(){
		if(n1<n2 && n1<n3){
			lowest=n1;
		}
		else if(n2<n1 && n2<n3){
			lowest=n2;
		}
		else{
			lowest=n3;
		}
	}
	
	void display(){
		cout<<"Lowest number:"<<lowest;
	}
	
};

int main(){
	Highest h(90,95,86);
	h.high();
	Lowest obj(90,95,86);
	obj.low();
	h.display();
	obj.display();
}
