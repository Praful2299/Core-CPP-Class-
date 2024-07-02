#include <iostream>
using namespace std;

template <class T , class G>
class Students{
	string name;
	T m1,m2,m3;
	G gender;
	
	public:
		Students(string n,T mar1,T mar2,T mar3,G g){
			name=n;
			m1=mar1;
			m2=mar2;
			m3=mar3;
			gender=g;
		}
		
	  void	display(){
			cout<<"Name:"<<name<<"Gender:"<<gender<<endl;
			cout<<"Marks:"<<m1<<" "<<m2<<" "<<m3<<endl;
		}
};

int main(){
	Students<int,char> s1("Praful",48,49,48,'m');
	Students<double,string> s2("Praful",48.02,49.4,48.5,"Male");
	s1.display();
	s2.display();
}
