#include<iostream>
using namespace std;

class Institution {
	private:
		int code;
		char course[20];
		float fee=10000;
		
	public:
		Institution(){
			cout<<"Enter course name: ";
			cin.getline(course,20);
			cout<<"Enter course code: ";
			cin>>code;
		}
//		float fees(){
//			if(course=="MERN"||"mern")
//			fee=38000;
//			else if(course=="JAVA"||"java")
//			fee=40000;
//			else if(course=="PYTHON"||"python")
//			fee=39000;
//			return fee;
//		}
		void display(){
			cout<<"====================================="<<endl;
			cout<<"Course code : "<<code<<endl<<"Course name : "<<course<<endl<<"Payable Fees : "<<fee;
		}
};

int main(){
	Institution i1;
	i1.display();
}
