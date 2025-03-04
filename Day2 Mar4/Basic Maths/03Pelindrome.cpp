#include<iostream>
using namespace std ;

int pelindrome(int num ){
    int revNum=0 ;
    int orgNum = num;
    while (num>0){
        int rem = num%10;
        revNum = revNum*10+rem;
        num = num/10;
    }
    cout<<revNum<<endl;
    if (orgNum == revNum){
        cout<<"number is pelindrom";
    }
    else{
        cout<<"number not pelindrome";
    }
    return 0;
}

int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;
    pelindrome(num);
}