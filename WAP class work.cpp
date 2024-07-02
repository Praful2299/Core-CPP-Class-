#include <iostream>
using namespace std;

int main(){
	double salary,year,bonus;
	cout<<"Enter Your Salary";
	cin>>salary;
	cout<<"Enter Year Of Service";
	cin>>year;
	
	if(year>5){
	
		bonus=salary*(5.0/100);
		cout<<"your Bonus Amount"<<bonus<<endl;
		cout<<"Net Salary"<<salary+bonus;
	}
	else{
		cout<<"Not Eligible For Bonnus";
		cout<<"Net Salary"<<salary;
	}
}
