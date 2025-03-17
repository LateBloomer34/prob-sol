#include<iostream>
using namespace std ;

int  main (){
    int n = 19;
    int m = n;
    int &k = n;
    cout<<m<<endl;
    cout<<"address of n is :- "<<&n<<endl;
    cout<<k<<endl;
    cout<<"address of k is :- "<<&k<<endl;
    cout<<n<<endl;
    cout<<"address of m is :- "<<&m<<endl;
}