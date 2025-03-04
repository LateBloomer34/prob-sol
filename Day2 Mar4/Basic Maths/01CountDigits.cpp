// Count digits in a number

#include<iostream>
using namespace std;

int count (int number){
    int coun = 0;
    if (number >0){
    while (number > 0){
        coun++;
        number = number/10;
    }
}
else{
    while(number<0){
        coun++;
        number = number/10;
    }
}
    return coun;
}

int main (){
    int number;
    cout<<"enter the number:- ";
    cin >> number;
    int n  = count(number);
    cout<<n;
}