#include <iostream>
using namespace std;

int main() {
	double quantity,total,discount;
	cout<<"Enter Purchased Quantity :";
	cin>>quantity;
	total=quantity*100;
	cout<<"Net Amount :"<<total<<endl;
	
	if(total>1000){
		discount=total*50/100.00;
		cout<<"you are eligible for 50% dicount"<<endl<<"Your discount :"<<discount;
		cout<<endl<<"Your Total Amount :"<<total-discount;
	}
	else{
		cout<<"YOU ARE NOT ELIGIBLE TO AVAIL DISCOUNT";
	}
}
