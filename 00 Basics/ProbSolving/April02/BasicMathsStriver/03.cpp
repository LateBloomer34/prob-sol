//check pelindrome


#include<iostream>
using namespace std;

bool pelindrome(int num ){
    int act = num;
    int rev = 0 ;
    while (num > 0 ){
        int rem = num%10;
        num = num/10;
        rev = rev*10+rem;
    }
    if (act == rev){
        return true;
    }
    return false;
}

int main (){
    int num = 41214;
    if (pelindrome(num)){
        cout<<"number is pelindrome";
    }
    else{
        cout<<"not pelindrome";
    }
}