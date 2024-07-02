#include <iostream>
using namespace std;

int main(){
	char vowels;
	cout<<"ENTER AN APHABET TO CHECK EITHER ITS VOWEL OR NOT :   ";
	cin>>vowels;
	
	switch(vowels){
		case 'a':cout<<"a is vowel";
		break;
		case 'A':cout<<"A is vowel";
		break;
		case 'e':cout<<"E is vowel";
		break;
		case 'E':cout<<"E is vowel";
		break;
		case 'i':cout<<"I is vowel";
		break;
		case 'I':cout<<"I is vowel";
		break;
		case 'o':cout<<"O is vowel";
		break;
		case 'O':cout<<"O is vowel";
		break;
		case'u':cout<<"U is vowel";
		break;
		case 'U':cout<<"U is vowel";
		break;
		default:cout<<vowels<<"  is not a vowel";
	}
}
