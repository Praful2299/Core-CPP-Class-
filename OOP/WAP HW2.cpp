#include<iostream>
using namespace std;

class Aoc{
	public:
			int radius;
	
		Aoc(){
			cout<<"Enter radius of circle:";
			cin>>radius;
		}	
		
		void display(){
			cout<<"Area of circle = "<<3.14*radius*radius;
		}
		
		
};

int main(){
	Aoc a;
	a.display();
}
