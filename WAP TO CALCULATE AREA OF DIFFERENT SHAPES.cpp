# include <iostream>
#include<cmath>
using namespace std;

int main(){
	char choice;
    cout<<"Choose any shape to know there are (e.g- s for square,c for circle,r for rectangle):  ";
    cin>>choice;
    
    switch(choice){
    	case'S':
    	case's': double side;
    			cout<<"Enter side of square:  ";
    			cin>>side;
    			double area_of_square;
    			cout<<"Area of Square = "<< side*side;
    	
    	case'R':
    	case'r': int w;
    			cout<<"Enter width of rectangle:  ";
    			cin>>w;
    			int l;
    			cout<<"Enter length of rectangle:  ";
    			cin>>l;
    			double area_of_rectangle;
    			cout<<"Area of rectangle : "<< w*l;
    			cin>>area_of_rectangle;
    		
    	case 'c':
    	case 'C': double pi = M_PI;
    			int radius;
    			cout<<"Enter radius of circle:  ";
    			cin>> radius;
    			double area_of_circle;
    			cout<<"Area of circle:  "<<pi*radius*radius;
    			
    	
	}
	
}
