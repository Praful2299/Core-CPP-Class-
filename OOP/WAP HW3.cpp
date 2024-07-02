#include<iostream>
using namespace std;

class Rectangle{
	public:
	int length,breadth;
	
	Rectangle(){
		cout<<"Enter length of rectangle:";
		cin>>length;
		cout<<"Enter breadth of rectangle:";
		cin>>breadth;
		cout<<"--------------------------------"<<endl;
	}

	void area(){
		cout<<"Area of rectangle = "<<length*breadth<<endl;
	}
	
	void perimeter(){
		int l=length+breadth;
		cout<<"perimeter of rectangle = "<<2*l;
	}
};

int main(){
	Rectangle r;
	r.area();
	r.perimeter();
}
