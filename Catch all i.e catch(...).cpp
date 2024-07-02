// Catch(...) i.e catch all
#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	string msg;
	try{
		while(1){
			cout<<"Enter numerator and denominator numbers:";
			cin>>n1>>n2;
			if(n2==0){
				throw n2;
			}
			cout<<"Division:"<<n1/(float)n2<<endl;
			cout<<"Do you wish to continue 'yes' or 'no' ";
			cin>>msg;
			if(msg=="no"){
				break;
			}
			else if(msg=="yes"){
				continue;
			}
			else{
				throw msg;
			}
		}
	}
	
	catch(...){ //catch all
		
		cout<<"Body of catch all.................... can handle all exception";
	}
}
