
 #include "NumClass.h"
  int countDig(int num){
    int count =0;
    while(num>0){
        num=num/10;
        count++;
    }
    return count;

  }
  int power(int bace ,int exponent){
    int result =1;
    while(exponent>0){
        result*=bace;
        exponent--;
    }
    return result;
  }
 
    int isArmstrong(int num){
        if (num<0){return 0;}
        if (num==0){return 1;}
        int count =countDig(num);
        int sum=0;
        int num1=num;
        while (num >0){
            int digit= num%10;
            sum+=power(digit,count);
            num/=10;
            
        }

         return (sum==num1);
    }
   
    int isPalindrome(int num){
        int reverse =0;
        int num1 = num;
        while(num>0){
            int digit =num%10;
            reverse=(reverse*10)+digit;
            num=num/10;
        }
       return (num1==reverse);
    }