#include<iostream>
using namespace std;

class Animal{
	private:
		string name,category,details;
		int no_legs;
		
		void set_details(){
			if(category=="herbivores"){
				details="Animal That Eat Plants";
			}
			else if(category=="carnivores"){
				details="Animal That Eat ionly meat";
			}
			else if(category=="omnivores"){
				details="Animal That Eat Both Plants And Meat";
			}
		}
	public:
		Animal(string nm,string cg,int leg){
			name=nm;
			category=cg;
			no_legs=leg;
			set_details();
		}
		
		void all_details(){
			cout<<"Name of animal:"<<name<<endl;
			cout<<"Number of legs:"<<no_legs<<endl;
			cout<<"Info:"<<details;
		}
		
		void categories(){
			cout<<"Category of animal:"<<category<<endl<<details;
		}
};

int main(){
	Animal a1("Dog","omnivores",4);
	a1.all_details();
	a1.categories();
}
