#include<iostream>
using namespace std;

class Animal{
	public:
	virtual void makesound()=0;
	virtual void move()=0;
};
class Dog:public Animal{
	public:
	void makesound(){
		cout<<"Sound: Dog Barks"<<endl;
	}
	void move(){
		cout<<"Move: Dog Walks"<<endl;
	}
};
class Cat:public Animal{
	public:
	void makesound(){
		cout<<"Sound: Cat Meow"<<endl;
	}
	void move(){
		cout<<"Move: Cat Walks"<<endl;
	}
};
class Bird:public Animal{
	public:
	void makesound(){
		cout<<"Sound: Bird Chirp"<<endl;
	}
	void move(){
		cout<<"Move: Bird Flies"<<endl;
	}
};

int main(){
	Animal *base;
	Dog d;
	base=&d;
	base->makesound();
	base->move();
	Cat c;
	base=&c;
	base->makesound();
	base->move();
	Bird b;
	base=&b;
	base->makesound();
	base->move();
}
