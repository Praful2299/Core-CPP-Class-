#include<iostream>
using namespace std;

int i=989;  //Global variable

int main(){
	int i=90;  // main f() variable
	
	if(1){
		int i=23;  // if local variable
	}
	
	for(int i=1;i<=10;i++){  // for loop local variable
		cout<<i<<endl;
	}
	
	cout<<"local:"<<i<<endl;
	cout<<"Global:"<<::i;
}

//Scope of variable
//Local Variable--> Block Level(Loops,if,f(),clas())
//Global--> Access by all

