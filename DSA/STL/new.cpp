#include<iostream>
#include <array>
using namespace std;

int main(){

    array<int,5> ar{1,2,3,4,5};
    array<int,5> ar1{11,22,33,44,55};

   for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    ar.swap(ar1);

    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<ar1[i]<<" ";
    }
}

