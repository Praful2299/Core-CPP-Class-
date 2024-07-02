/* WAP to create a class named student,
data member--> name,roll no,stream
member_f()--> getter(),change_stream(),setter()*/

#include<iostream>
using namespace std;

class Students{
		public:
    	int roll;
	    string name,stream;
		
		Students(){ //deafault
			
			roll=0;
			name="abcd";
			stream="xyz";
			cout<<"Constructor implicit calling,obje initialize above values";
			
		}
		
		
	void getter(){
		cout<<"Name:"<<name<<endl<<"Roll number:"<<roll<<endl;
		cout<<"Stream:"<<stream;
	}
};

int main(){
	Students s1;
	s1.getter();

}
