
#include<iostream>
using namespace std;

class Student{
	public:
		int marks;
		Student(int a){
			marks=a;
		}
		Student(){
			marks=0;
		}
		
		Student operator +(Student s){
			Student temp;
			temp.marks=marks+s.marks;
			return temp;
		}
};

int main(){
	Student a(23),b(25),c(26),d(30),e;
	e=a+b+c+d;
	cout<<e.marks;
}
