//WAP TO FIND THE NUMBER OF OBJECTS BEING CREATED OF A CLASS CYBROM.
#include<iostream>
using namespace std;

class Cybrom{
	public:
		static int count_objects;
		Cybrom(){
			count_objects++;
		}
};

int Cybrom::count_objects;

int main(){
	Cybrom c1,c2,c3,c4;
	cout<<Cybrom::count_objects;
}
