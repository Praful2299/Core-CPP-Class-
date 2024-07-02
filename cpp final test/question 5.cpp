#include<iostream>
using namespace std;

class Shape{
	public:
	virtual void calculate_area(){
		
	}
};

class Circle:public Shape{
	int radius;
	void calculate_area(){
		cout<<"Enter radius of circle:";
		cin>>radius;
		cout<<"Area of circle:"<<2*3.14*radius;
	}
};
class Square:public Shape{
	int side;
	void calculate_area(){
	cout<<"Enter side of square:";
	cin>>side;
	cout<<"Area of square:"<<side*side;
	}
};
class Triangle:public Shape{
	int breadth,height;
	void calculate_area(){
		cout<<"Enter height and breadth of triangle:";
		cin>>height>>breadth;
		cout<<"Area of triangle:"<<0.5*height*breadth;
	}

};

int main(){
	Shape *point;
	Circle c;
	Square s;
	Triangle t;
	point=&c;
	point->calculate_area();
	point=&s;
	point->calculate_area();
	point=&t;
	point->calculate_area();
}
