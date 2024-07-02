#include<iostream>
using namespace std;

class Shapes{
	public:
		
	virtual void calculate_area(){
		
	}
};
class Circle:public Shapes{
	public:
		double radius;
		Circle(){
			cout<<"Enter radius of circle:";
			cin>>radius;
		}
		void calculate_area(){
			cout<<"Area of circle:"<<3.14*radius*radius<<endl;
		} 
};
class Square:public Shapes{
	public:
		int side;
		Square(){
			cout<<"Enter length of side of square:";
			cin>>side;
		}
		void calculate_area(){
			cout<<"Area of square:"<<side*side<<endl;
		}
};
class Triangle:public Shapes{
	public:
	int b,h;
	Triangle(){
		cout<<"Enter base and height of triangle:";
		cin>>b>>h;
	}
	void calculate_area(){
		cout<<"Area of triangle:"<<0.5*b*h<<endl;
	}
};

int main(){
	Shapes *base;
	Circle c;
	base=&c;
	base->calculate_area();
	Square s;
	base=&s;
	base->calculate_area();
	Triangle t;
	base=&t;
	base->calculate_area();
}
