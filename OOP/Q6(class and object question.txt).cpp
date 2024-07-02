#include<iostream>
using namespace std;

class Transport{
	private:
		int vno;
		string vehicle;
		string type;
		
		string findtype(){
			if(vehicle=="motorcycle")
			type="MCYCL";
			else if(vehicle=="car")
			type="MTV";
			else if(vehicle=="truck")
			type="HTV";
			else if(vehicle=="bus")
			type="HTV";
			return type;
		}
		
	public:
		void enter(){
			cout<<"Enter vehicle number: ";
			cin>>vno;
			cout<<"Enter vehicle name(Car,truck,motorcycle,truck or bus): ";
			cin>>vehicle;
			type=findtype();
			
		}
		void display(){
			cout<<"========================================"<<endl;
			cout<<"Vehicle number: "<<vno<<endl<<"Vehicle Name: "<<vehicle<<endl<<"Vehicle Type: "<<type;
		}
};

int main(){
	Transport t1;
	t1.enter();
	t1.display();
	
}

