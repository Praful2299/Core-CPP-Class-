#include<iostream>
using namespace std;

class Swap{
	public:
		int num1,num2,temp;
		
		Swap(int n1,int n2){
			num1=n1;
			num2=n2;
			temp;
			cout<<num1<<" "<<num2<<endl;
		}
		
		void swap(){
			temp=num1;
			num1=num2;
			num2=temp;
		}
		
		void display(){
			cout<<"After swapping : "<<num1<<" "<<num2;
		}
};

int main(){
	Swap s(510,548);
	s.swap();
	s.display();
}
