//count Digit of a number


#include<iostream>
using namespace std;

int count (int num ){
    int digit = 0 ; 
    while (num >0){ 
        digit++;
        num = num/10;
    }
return digit;
}

int main (){
    int num = 675380;
    cout<<count(num);

}