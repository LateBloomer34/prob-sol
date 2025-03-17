#include<iostream>
using namespace std ;  

int increment(int &k ){   // call by reference 
    k  = k+1;
    cout<<"inc call:- "<<endl;
    cout<<k<<endl;
    cout<<&k<<endl;
    return k;
}

int main (){
    int n = 5 ; 
    increment(n);
    cout<<"main:-"<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;
}