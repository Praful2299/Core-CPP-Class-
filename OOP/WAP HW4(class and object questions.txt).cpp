#include<iostream>
using namespace std;

class Elec_bill{
	private:
		char Cname[30];
		long long Pnumber;
		int no_of_unit;
		float amount;
		
		float calc_amount(){
			if(no_of_unit<=50)
			amount=0;
			else if(no_of_unit>50 && no_of_unit<=150)
			amount=no_of_unit*.80;
			else if(no_of_unit>150 && no_of_unit<=350)
			amount=no_of_unit;
			else if(no_of_unit>350)
			amount=no_of_unit*1.20;
			return amount;
		} 
		
		public:
			Elec_bill(){
				cout<<"Enter Name,Contact number and Units used :";
				cin.getline(Cname,30);
				cin>>Pnumber>>no_of_unit;
				amount=calc_amount();
			}
			
		void display(){
			cout<<"=================================================="<<endl;
			cout<<"Customer Name: "<<Cname<<endl<<"Contact Number : "<<Pnumber<<endl<<"Units used: "<<no_of_unit<<endl<<"Bill Amount: "<<amount;
		}
};

int main(){
	Elec_bill e1;
	e1.display();
}
