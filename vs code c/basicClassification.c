#include "NumClass.h"

int isPrime(int num){
    if(num<=1) return 0;
    if (num<=3) return 1;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return 0;
    }
    return 1;
}
int factorial(int num){
    if(num==0){return 1;}
    return num*factorial(num-1);
}
int isStrong(int num){
    int num1 = num;
    if (num<=0){return 0;}
    int sum=0;
    while(num>0){
        int digit =num%10;
        sum+=factorial(digit);
        num=num/10;

    }

return (sum==num1);
   
}
