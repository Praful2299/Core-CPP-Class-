#include<iostream>
using namespace std;

int main(){
	int marks[6]={23,44,45,36,38,55};
	int max=marks[0];  
	int min=marks[0];  

    
	for (int i=1;i<6;i++){
		if(marks[i]>max) {
			max=marks[i];  
		}
		else
		max=marks[0];
	}
	
	

		for (int i=1;i<6;i++){
			if(marks[i]<min){
				min=marks[i];
			}
			else
			min=marks[0];
		}
	
	cout<<"Maximum among all:"<<max<<endl;
	cout<<"Minimum among all:"<<min;
	
	}

