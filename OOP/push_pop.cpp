#include<iostream>
using namespace std;

int main(){
	string st="Apple";
	st.push_back('B');
	st.push_back('A');
	st.push_back('N');
	st.push_back('A');
	st.push_back('N');
	st.push_back('A');
	//st.pop_back();   //this is not working in this compiler but it will work on online or different compiler
	cout<<st; 
}
