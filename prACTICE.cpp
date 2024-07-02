#include<iostream>
using namespace std;

int main(){
//Multiplication table
//	int n,range;
//	cout<<"Enter a number to print table:";
//	cin>>n;
//	cout<<"Enter range:";
//	cin>>range;
//	for(int i=1;i<=range;i++){
//		cout<<n<<"x"<<i<<"="<<n*i<<endl;
//	}t

//Multiplication table with range
//int n,p,result=1;
//cout<<"Enter number:";
//cin>>n;
//cout<<"Enter power:";
//cin>>p;
//for(int i=1;i<=p;i++){
//	result=result*n;
//}
//cout<<result;

//Rever the digit input bu user
//int num,last,reverse=0,temp;
//cout<<"Enter a number:";
//cin>>num;
//temp=num;
//
//while(num>0){
//	last=num%10;
//	reverse=reverse*10+last;
//	num=num/10;
//}
//cout<<"Rever of number "<<temp<<"="<<reverse;
//

//Prime number or not
//int n,flag=0;
//cout<<"Enter a number:";
//cin>>n;
//for(int i=2;i<=n/2;i++){
//	if(n%i==0){
//		flag=1;
//	}
//}
//if(flag==0){
//	cout<<n<<" is a prime nzumber";
//}
//else{
//	cout<<n<<" is not a prime number";
//}
//

//Prime number upto range
//int range,flag;
//
//cout<<"Enter a range:";
//cin>>range;
//
//for(int i=1;i<=range;i++){ //number 
//	for(int j=2;j<=i/2;++j){  //loop prime 
//		flag=1;
//		if(i%j==0){
//			flag=0;
//			break;
//		}
//		else{
//			flag=1;
//		}	
//	}
//	if(flag==1){
//		cout<<i<<endl;
//	}
//}


//ARMSTRONG NUMBER OR NOT
//int number,sum=0,last,temp;
//cout<<"Enter a number to check whether it is a armstrong number or not:";
//cin>>number;
//temp=number;
//while(number>0){
//	last=number%10;
//	sum=sum+(last*last*last);
//	number=number/10;
//}
//if(temp==sum){
//	cout<<"Number is armstrong";
//}
//else{
//		cout<<"Number is not a armstrong";
//
//}

//Palindrone number
//int num,reverse=0,last,temp;
//cout<<"Enter a number:";
//cin>>num;
//temp=num;
//while(num>0){
//	last=num%10;
//	reverse=reverse*10+last;
//	num=num/10;
//}
//if(reverse==temp){
//	cout<<"NUmbr is palindrome";
//}
//else{
//	
//	cout<<"NUmbr is not a palindrome";
//}

//int a,b,reverse=0,last,flag;
//cout<<"Enter starting range:";
//cin>>a;
//cout<<"Enter ending range:";
//cin>>b;
//
//for(int i=a;i<=b;i++){
//	while(i<0){
////		temp=i;
//		last=i%10;
//		reverse=reverse*10+last;
//		i=i/10;
//	}
//	flag=1;
//	if(reverse==i){
//		flag=0;
//	}
//	else if(flag==0){
//		cout<<i<<endl;
//	}
//}


//WAP TO MULTIPLY TWO NUMBERS WITHOUT USING MULTIPLICATION OPERATOR

int num1,num2,product=0,temp;
cout<<"Enter number 1:";
cin>>num1;
cout<<"Enter number 2:";
cin>>num2;
temp=num2;
while(num2>0){
	product=product+num1;
	num2--;
}
cout<<"Multiplicaton of "<<num1<<" and "<<temp<<"is:"<<product;
}

