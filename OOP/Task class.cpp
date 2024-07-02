//WAP TO FIND THE NUMBER OF OBJECTS BEING CREATED OF A CLASS CYBROM.
#include<iostream>
using namespace std;

static void f2(){
	cout<<"F2 independent function";
}

class Cybrom{
	public:
		static int count_objects;
		static string address;
		Cybrom(){
			count_objects++;
		}
		static void f1(){
			cout<<"Another static"<<endl;
		}
		static void display(){
//			cout<<count_objects<<endl;
//			cout<<address;
			f1();
			f2();
		}
};

int Cybrom::count_objects;
string Cybrom::address="Bhopal";

int main(){
	Cybrom c1,c2,c3,c4;
//	cout<<Cybrom::count_objects;
	c1.display();
//	cout<<Cybrom::address;
}
