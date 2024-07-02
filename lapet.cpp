#include<iostream>
using namespace std;

class Students{
	private:
		double fees;
		int id;
	
	public:
		string name,add;
		
	
		Students(){
	
			cout<<"Enter name & Address of student:";
			cin>>name>>add;
		
		}
};
class Fee: public Students{
	public:
			Fee(double f,int i){
			f=fees;
			i=id;
		}
		
};

int main(){
	Students s1(39500.58,0255);
	cout<<s1.id<<s1.name<<s1.add<<s1.fees;
}

