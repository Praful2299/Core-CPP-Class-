#include <iostream>
using namespace std;

int main(){
	int age;
	char nation;
	cout<<"enter your age";
	cin>>age;
	cout<<"are you indian 'y' or 'n' ";
	cin>>nation;
	
	age>=18 && nation=='y'?cout<<"eligible":cout<<"not eligible";
	
}

