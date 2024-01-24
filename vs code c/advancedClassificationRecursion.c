#include "NumClass.h"

int power(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

int countDig(int num) {
    if (num == 0) return 0;
    return 1 + countDig(num / 10);
}

int isArmstrongHelper(int num, int numDigits, int originalNum) {
    if (num == 0) {
        return (originalNum == 0);
    } else {
        int digit = num % 10;
        return (power(digit, numDigits) + isArmstrongHelper(num / 10, numDigits, originalNum));
    }
}

int isArmstrong(int num) {
    int numDigits = countDig(num);
    return (isArmstrongHelper(num, numDigits, num) == num);
}

int isPalindrome(int num) {
    if (num / 10 == 0) return 1;
    int rightDigit = num % 10;
    int countDigits = countDig(num);
    int leftDigit = num / power(10, countDigits - 1);
    if (rightDigit != leftDigit) return 0;
    else {
        num = num - (leftDigit * power(10, countDigits - 1));
        num = num / 10;
        return isPalindrome(num);
    }
}