#include<iostream>
using namespace std;

int main(){
	string s1="apple";
	string s2="apple";
	// s1==s2-> 0
	//s1>s2-> Positive(Ascii Difference)
	//s1<s2->Negative(Ascii Difference)
	cout<<s1.compare(s2);
}
