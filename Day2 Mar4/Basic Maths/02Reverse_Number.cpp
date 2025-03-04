#include<iostream>
using namespace std;

int reverse(int num ){
    int revNum = 0 ;

    while (num>0){
        int rem = num%10;
        revNum = revNum*10+ rem;
        num = num /10;
    }
return revNum;
}

int main (){
    int num ;
    cout<<"enter the number:-";
    cin>>num;
    int n = reverse(num);
    cout<<n;
}