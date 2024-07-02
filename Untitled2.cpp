#include<iostream>
using namespace std;

class Students{
		public:
    	int roll;
	    string name,stream;
		
		Students(){ //deafault
			cout<<"Enter roll number,name and stream \n";
			cin>>roll>>name>>stream;
		}
		
		Students(string nm,string st,int r){  //parameterized
			name=nm;
			stream=st;
			roll=r;
		}
		
	void getter(){
		cout<<"Name:"<<name<<endl<<"Roll number:"<<roll<<endl;
		cout<<"Stream:"<<stream<<endl;
	}
};

int main(){
	Students s1,s2;
	s1.getter();
	s2.getter();
}
