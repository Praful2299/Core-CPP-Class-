#include <iostream>
using namespace std;

namespace A{
	string name="correct";
}

namespace B{
	string name="wrong";
}

namespace C {
	string name="hakalula hakalula lula haka lula haka ahahahahah hahahahah nananan nanana" ;
}

int main(){
	using namespace C ;
	cout<<name;

}
