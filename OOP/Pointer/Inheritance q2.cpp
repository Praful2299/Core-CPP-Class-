#include<iostream>
using namespace std;

class Shape{
	public:
		int length,width,radius;
		void AOC(){
			cout<<"Enter radius of circle: ";
			cin>>radius;
			cout<<"Area of circle :"<<3.14*radius*radius<<endl;
		}
		void POC(){
			cout<<"Enter radius of circle: ";
			cin>>radius;
			cout<<"Perimeter of circle :"<<2*3.14*radius<<endl;
		}
		void AOR(){
			cout<<"Enter length of rectange: ";
			cin>>length;
			cout<<"Enter width od rectangle: ";
			cin>>width;
			cout<<"Area of rectangle: "<<length*width<<endl;
		}
		void POR(){
			cout<<"Enter length of rectange: ";
			cin>>length;
			cout<<"Enter width od rectangle: ";
			cin>>width;
			int t=length+width;
			cout<<"Perimeter of rectangle: "<<2*t;
		}
};

class Circle:public Shape{
	
};

class Rectangle:public Shape{
	
};

int main(){
	Circle c;
	c.AOC();
	c.POC();
	Rectangle r;
	r.AOR();
	r.POR();
}
