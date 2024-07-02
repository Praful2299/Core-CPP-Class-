#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream obj("readonly filehandling.txt");
	string st;
	
	while(getline(obj,st)){   //mgetline(input_stream_object,string_variable)
		cout<<st<<endl;
	}
}

