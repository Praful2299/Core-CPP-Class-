//WAP a loop that asks the user to enter two numbers.the numbers should be added and the sum displayed.the loop should ask the user whether he or she wishes to perform the operation again.if so ,the loop should repeat;otherwise it should terminate.

#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	string ch;
	while(1){
	cout<<"Enter number 1 :";
	cin>>num1;
	cout<<"Enter number 2 :";
	cin>>num2;
	cout<<"Sum :"<<num1+num2<<endl;
	cout<<"Do You Want To Continue : 'yes' or 'no'  :";
	cin>>ch;
	if(ch=="yes"){
		continue;//continue statement is used to restart the loop again
	}
	else if(ch=="no"){
		cout<<"Thank you for choosing our services";
		break; //Terminate our loop
	}
	}
}
