//question 3

#include<iostream>
using namespace std;

int main(){
	int n,count_p,count_n,count_z;
	string ch;
	while(1){
		cout<<"Enter number :";
		cin>>n;
		if(n>0){
			count_p++;
		}
		else if(n<0){
		count_n++;
		}
		else{
			count_z++;
		}
		cout<<"Do you wish to continue 'yes' or 'no'" ;
		cin>>ch;
		if(ch=="yes"){
			continue;
		}
		else if(ch=="no"){
			cout<<"Thank You For Choosing Our Service"<<endl;
			break;
		}
		
	}
	cout<<"Positive count : "<<count_p<<endl;
	cout<<"Negative count : "<<count_n<<endl;
	cout<<"Zero count : "<<count_z;
}
