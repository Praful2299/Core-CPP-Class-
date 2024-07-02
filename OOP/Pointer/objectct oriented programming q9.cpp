#include<iostream>
using namespace std;

class Determiner{
	public:
		int num,last,reverse=0,sum,temp;
		temp=num;
		Determiner(int n){
			num=n;
		}
		
		void palindrome(){
			while(num>0){
				last=num%10;
				reverse=reverse*10+last;
				num=num/10.0;
			}
		}
};
