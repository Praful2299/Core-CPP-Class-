#include<iostream>
using namespace std;

 template <typename T>
 T great(T a,T b){
 		if(a>b)
 		return a;
 		else 
 		return b;
 }
 int main(){
 	cout<<great<int>(89,528)<<endl;                      //here we can call great function with any datat type
 	cout<<great<double>(5.62,5.67)<<endl;
 	cout<<great<char>('e','w');
 }
