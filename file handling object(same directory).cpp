#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
	ofstream wr("new24.txt");
	wr<<"      Name     Stream       Age"<<endl;
	string name,stream,confirm;
	int age;
	while(1){
		cout<<"Enter Your Name:";
		cin>>name;
		cout<<"Enter Stream:";
		cin>>stream;
		cout<<"Enter Your Age:";
		cin>>age;
		wr<<setw(10)<<name<<setw(10)<<stream<<setw(10)<<age<<endl;
		cout<<"Do you want to continue 'yes' or 'no'";
		cin>>confirm;
		if(confirm=="yes"){
			continue;
		}
		else if(confirm=="no"){
			break;
		}
		else{
			cout<<"Enter Valid Choice";
			break;
		}
		
	}
	wr.close();
}
