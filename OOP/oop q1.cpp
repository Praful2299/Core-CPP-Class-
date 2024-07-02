#include<iostream>
using namespace std;

class Book{
	public:
		int bid,quantity;
		
		Book(int b ,int q){
			bid=b;
			quantity=q;
		}
		
		void purchase(){
			cout<<"Enter no. of books to purchase:";
			cin>>bid;
			quantity=quantity+bid;
		}
		
		void sell(){
			cout<<"Enter no. of book sell:";
			cin>>bid;
			quantity=quantity-bid;
		}
		
		void currentstock(){
			cout<<"Books in stock:"<<quantity;
		}
};

int main(){
	Book b(0,100);
	b.purchase();
	b.sell();
	b.currentstock();
}
