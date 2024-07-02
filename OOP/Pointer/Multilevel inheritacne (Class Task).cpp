#include<iostream>
using namespace std;
class Vehicle{
	protected:
		int max_speed,milage,capacity;
		double total_price;
	public:
		Vehicle(int mx,int mi,int c){
			max_speed=mx;
			milage=mi;
			capacity=c;
			total_price=0;
		}
		virtual void fare(){
			total_price=capacity*100;
		}
		virtual void display(){
			cout<<"Maximum Speed:"<<max_speed<<endl<<"Milage:"<<milage<<endl<<"Capacity"<<capacity<<endl<<"Total Fare:"<<total_price;
		}
};
class Bus:public Vehicle{
	private:
		string name;
	public:
		Bus(string n,int mx,int mi,int c=50):Vehicle (mx,mi,c){
			name=n;
		}
		void fare(){
			total_price=capacity*100;
			total_price=total_price+(.1*total_price);
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Maximum Speed:"<<max_speed<<endl<<"Milage:"<<milage<<endl<<"Capacity"<<capacity<<endl<<"Total Fare:"<<total_price;
		}
		
			
};

int main(){
	Vehicle *v;
	Bus b("VOLVO",150,18);
	v=&b;
	v->fare();
	v->display();
//	b.fare();
//	b.display();
}
