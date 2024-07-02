#include <iostream>
using namespace std;

int main(){
	int w_c;
	cout<<"enter water consumption";
	cin>> w_c;
	
	if(w_c>45 && w_c<=75){
		cout<<"Your Bill is 475rs";
	}
	else if(w_c>75 && w_c<=125){
		cout<<"Your Bill is 750rs";
	}
	else if(w_c>125 && w_c<=200){
		cout<<"Your Bill is 1225rs";
	}
	else if(w_c>200 && w_c<=350){
		cout<<"Your Bill is 1650rs";}
	else if(w_c>350){
		cout<<"Your Bill is 2000rs";
	}
	
}
