#include <iostream>
using namespace std;

int main(){
	double hc,attend,print;
	cout<<"Number of classes held";
	cin>>hc;
	cout<<"number of classes atteded";
	cin>>attend;
	
	print= (attend/hc)*100;
	
	if(print>=75) {
		cout<<"Total Attendance--->"<<print<<endl;
		cout<<"Allowed To Sit In The Exam";
		
	}
	else{
		cout<<"Total Attendance--->"<<print<<endl;
		cout<<"Not eligible to sit in exams";
	}
	
}
