
#include<iostream>
using namespace std;

void insert(int a[],int n){
	int key,j;
	for(int i=1;i<n;i++){
		key=a[i];      //key=a[1]=78    key=-1
		j=i-1;		  //j=0
		while(j>=0&& key<a[j]){     //a[1]<a[0] 78<89    -1<89     -1<78
			a[j+1]=a[j];		 //a[1]=a[0] 89 89     78 89 89    78 78 89
			j--;
		}
		j++;
		a[j]=key;        //a[0]=78 i.e 78 89   -1 78 89
	}
}

int main(){
	int ar[5]={89,78,-1,45,7};
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	
	insert(ar,5);
	cout<<endl;
	for(int i=0;i<5;i++){
	cout<<ar[i]<<" ";
	}

}
