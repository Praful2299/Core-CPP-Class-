#include<iostream>
using namespace std;

class Student{
	public:
	int marks;
	
	Student(int a){
		marks=a;
	}
	
	void operator +(Student s){    //s=b
		int result;
		result=marks-s.marks;  //s.marks=b.marks
		cout<<result;
	}
};

int main(){
	Student a(23),b(21);
	a+b;   // here a+b means--> a.operator+(b) // here we made our + operator to perform as substraction.
	
}
