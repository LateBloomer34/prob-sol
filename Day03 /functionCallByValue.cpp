#include<iostream>
using namespace std ;

int increment(int n ){  //call by value
    n  = n+1;
    cout<<"inc call:- "<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;
    return n;
}

int main (){
    int n = 5 ; 
    increment(n);
    cout<<"main:-"<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;
}