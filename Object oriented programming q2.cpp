#include<iostream>
using namespace std;
class Circle{
	public:
		double radius,area,perimeter;
		Circle(double r){
			radius=r;
		}
		
		void areaofc(){
			area=3.14*radius*radius;
		}
		
		void parameterofc(){
			perimeter=2*3.14*radius;
		}
		
		void display(){
			cout<<"Area of circle: "<<area<<endl;
			cout<<"Perimeter of circle:"<<perimeter;
		}
		
};

int main(){
	Circle c(1);
	c.areaofc();
	c.parameterofc();
	c.display();
}
