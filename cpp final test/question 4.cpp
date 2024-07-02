#include<iostream>
using namespace std;

class System{
	public:
	virtual void process()=0;
	virtual void input()=0;
	virtual void output()=0;
};
class Desktop:public System{
	void process(){
		cout<<"This is process unit of desktop"<<endl;
	}
	void input(){
		cout<<"This is input of desktop"<<endl;
	}
	void output(){
		cout<<"This is output of desktop"<<endl;
	}
};
class Laptop:public System{
		void process(){
		cout<<"This is process unit of laptop"<<endl;
	}
	void input(){
		cout<<"This is input of laptop"<<endl;
	}
	void output(){
		cout<<"This is output of laptop"<<endl;
	}
};

int main(){
	System *p;
	Desktop d;
	Laptop l;
	p=&d;
	p->process();
	p->input();
	p->output();
	p=&l;
	p->process();
	p->input();
	p->output();
}
