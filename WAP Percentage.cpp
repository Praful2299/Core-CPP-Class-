#include <iostream>;
using namespace std;

int main(){
	int e,h,p,c,m;
	double om,percentage;
	cout<<"English Mark Out of 100--->  ";
	cin>>e;
	cout<<"Hindi Marks out of 100--->  ";
	cin>>h;
	cout<<"Physics Marks out of 100--->  ";
	cin>>p;
	cout<<"Chemistry Marks out of 100--->  ";
	cin>>c;
	cout<<"Maths marks out of 100-->  ";
	cin>>m;
	
	om= e+h+p+c+m;
	percentage= (om/500.0)*100;
	
	
	if(percentage>=60){
		cout<<"Percentage--->"<<percentage<<endl;
		cout<<"GRADE A";
	}
	if(percentage>=50){
		cout<<"GRADE B";
	}
	if(percentage>=40){
		cout<<"GRADE C";
	}
	if(percentage<40){
		cout<<"GRADE D";
	}
	
	
}
