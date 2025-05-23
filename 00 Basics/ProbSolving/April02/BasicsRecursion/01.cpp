// print n times

#include<iostream>
using namespace std;

void print (int n ){
    if (n>0){
        cout<<n<<endl;
        // n--;
        n = n-1;
        print (n);
    }
}

int main (){
    int n = 5;
    print(n);
}