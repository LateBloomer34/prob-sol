//Armstrong number

#include<iostream>
using namespace std;

bool arm (int num){
    // step 1 - find the digits in number
    int count = 0 ; 
    int ogNum = num;
    int real = num;
    while(num >0){
        count++;
        num = num/10;
    }

    int arm = 0;
    while(ogNum>0){
        int rem = ogNum%10;
        ogNum = ogNum/10;
        arm = arm+pow(rem,count);
    }
   
        if(real == arm ){
            return true;
        }
    return false;
}

int main (){
    int num = 153;
    arm (num);

    if (arm(num)==true){
        cout<<"arm";
    }
    else{
        cout<<"not arm";
    }
}