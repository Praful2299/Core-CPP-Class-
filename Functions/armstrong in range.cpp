#include<iostream>
using namespace std;

void armstrong(int starting,int ending){
	
	for(int i=starting;i<=ending;i++){
		int temp=i,last,sum=0,flag=0;
		while(i!=0){
			last=i%10;
			sum=sum+(last*last*last);
			i=i/10;
			
			if(temp==sum)
			flag=1;
			break;
		
		}
		if(flag==1){
			cout<<i<<" ";
		}
		
	}
}

int main(){
	int start,end;
	cout<<"Enter Starting adn Ending Range:";
	cin>>start>>end;
	cout<<"The armstrong number from "<<start<<"to"<<end<<"are :";
			armstrong(start,end);
}
