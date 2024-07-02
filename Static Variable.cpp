#include<iostream>
using namespace std;

class Student{
	public:
		static string institute_name;
};

string Student::institute_name="CYBROM";

int main(){
	Student s1,s2,s3;
	cout<<s1.institute_name<<endl;
	cout<<s2.institute_name<<endl;
	Student::institute_name="Academy";
	cout<<s2.institute_name;
}
