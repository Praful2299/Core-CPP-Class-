#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream wr("F:\\file hadling\\new24.txt");
	
	wr<<"Apple is good for health"<<endl;
	wr<<"This is just a msg";
	wr.close();
}
