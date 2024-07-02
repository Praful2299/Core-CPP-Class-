#include<iostream>
using namespace std;

class Resume{
	public:
		string name;
		double percent10,percent12,percentdeg;
		bool cw;
		
		Resume(string nm,double ten,double twelve,double deg,bool work){
			name=nm;
			percent10=ten;
			percent12=twelve;
			percentdeg=deg;
			cw=work;
		}
		
		void update_percent(){
			cout<<"Enter your 10th percentage: ";
			cin>>percent10;
			cout<<"Enter your 12th percentage: ";
			cin>>percent12;
			cout<<"Enter your UG percentage: ";
			cin>>percentdeg;
			cout<<"Are you currently working: ";
			cin>>cw;
		}
		
		void update_name(){
			cout<<"Enter Name:";
			cin>>name;
		}
		
		void dispay(){
			cout<<"Name: "<<name<<endl<<"10th Percentage: "<<percent10<<"%"<<endl<<"12th Percentage"<<percent12<<"%"<<endl<<"Working status: "<<cw;
		}
};

int main(){
	Resume r("Praful",79.8,84.6,78,true);
	r.dispay();
}
