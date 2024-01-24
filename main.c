#include <stdio.h>
#include "NumClass.h"
int printAllPrimes(int num1 , int num2){
    printf("in function");
    while(num2>=num1){
        if(isPrime(num1)){
            printf("%d ",num1);
        }
        num1++;

    }

printf("\n");
return 0;
}
int printAllArmstrong(int num1,int num2){
     while(num2>=num1){
        if(isArmstrong(num1)){
            printf("%d ",num1);
        }
        num1++;

    }

printf("\n");
return 0;
}

int printAllStrongNums(int num1,int num2){
    while(num2>=num1){
        if(isStrong(num1)){
            printf("%d ",num1);
        }
        num1++;

    }

printf("\n");
return 0;
}

int PrintAllpalindrome(int num1,int num2){
       while(num2>=num1){
        if(isPalindrome(num1)){
            printf("%d ",num1);
        }
        num1++;

    }

printf("\n");
return 0;
}
int main(){
    int num1,num2;
   printf("Enter 2 numbers with space:\n");
    scanf("%d %d", &num1, &num2);

    printf("You entered: %d and %d\n", num1, num2);

    int smallerNum,bigerNum;
    if (num1>num2)
    {
        smallerNum=num2;
        bigerNum=num1;
    }else{
        smallerNum=num1;
        bigerNum=num2;
    }
    printAllPrimes(smallerNum,bigerNum);
    printAllArmstrong(smallerNum,bigerNum);
    PrintAllpalindrome(smallerNum,bigerNum);
    printAllStrongNums(smallerNum,bigerNum);

    
    return 0;
}