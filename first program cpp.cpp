#include <iostream>
using namespace std;

namespace A{
	string name="Praful";
}
namespace B{
	string name="Kanha";
}
int main(){
	using namespace A;
	cout<<name;
}
