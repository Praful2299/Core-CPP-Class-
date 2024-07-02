#include<iostream>
using namespace std;

class Student{
	private:
		int english,hindi,maths,science,social;
		double percentage;
		char grade;
	public:	
		void calculate_percentage(){
			int total;
			cout<<"Enter Number Obtained in English:"<<endl;
			cin>>english;
			cout<<"Enter Number Obtained in Hindi:"<<endl;
			cin>>hindi;
			cout<<"Enter Number Obtained in Mathematics:"<<endl;
			cin>>maths;
			cout<<"Enter Number Obtained in Science:"<<endl;
			cin>>science;
			cout<<"Enter Number Obtained in Social Science:"<<endl;
			cin>>social;
			total=english+hindi+maths+science+social;
			percentage=total/5;
		}
		
		void calculate_grade(){
			if(percentage>=60 && percentage<=100){
				grade='A';
			}
			if(percentage>=50 && percentage<59){
				grade='B';
			}
			if(percentage>=40 && percentage<49){
				grade='C';
			}
			if(percentage<40){
				grade='D';
			}
		}
		
		void display(){
			cout<<"Percentage: "<<percentage<<endl<<"Grade :"<<grade<<" grade";
		}
};

int main(){
	Student s;
	s.calculate_percentage();
	s.calculate_grade();
	s.display();
}
