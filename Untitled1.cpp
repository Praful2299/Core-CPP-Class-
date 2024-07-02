 #include<iostream>
using namespace std; 
 class Media{
    public:
      virtual void play(){
           cout<<"i am playing .............\n";
         }    
 };
  class Audio:public Media{
      public:
        void play(){  //redefine
           cout<<"i am  playing audio...\n";
         }        
 };
 class Vedio:public Media{
      public:
       void play(){   //redefine
          cout<<"i am  playing vedio...\n";
        }        
 };
 int main(){
     Media *base,m;
     Audio a;
     Vedio v;
     base=&m;
     base->play();
     base=&a;
     base->play();
     base=&v;
     base->play();
}
