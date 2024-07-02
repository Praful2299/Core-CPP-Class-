#include<iostream>
using namespace std;

class Media{
	public:
		
		virtual void play(){
			cout<<"I am a f() of Media class";
		}
};

class Audio:public Media{
	void play(){
		cout<<"I am player of audio class\n";
	}
};

class Video:public Media{
	void play(){
		cout<<"I am player of video class\n";
	}
};

int main(){
	Media *base;
	Audio a;
	base=&a;
	base->play();
	Video v;
	base=&v;
	base->play();
}
