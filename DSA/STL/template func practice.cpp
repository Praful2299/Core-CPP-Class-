#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
	return a+b;
}

int main(){
	cout<<add<int>(5,15)<<endl;
	cout<<add<double>(5.9,8.2);
}
