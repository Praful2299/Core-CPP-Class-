/* WAP to create a array of n elements and defined the following f() as well.
	
	1)Create()
	2)Highest()
	3)Lowest()
	4)Average()
	5)even_sum()
	6)odd_sum()
	7)print_even()
	8)print_odd() 
	9) Swap first last */
	
#include<iostream>
using namespace std;

void create (int a[], int size){
	for(int i=0;i<size;i++){
		cout<<"Enter number for index:"<<i<<" :"<<endl;
		cin>>a[i];
	}
	for(int i=0;i<size;i++){
		cout<<"number at index:"<<i<<" :"<<a[i]<<endl;
		
	}
}

int main(){
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	int a[size];
	create(a,size);
}

	

