/*In a mathematical exploration, participants investigate intriguing properties of numbers. 



Write a program that takes a global variable number n as input and checks if n is divisible by the sum of its digits, providing valuable insights.

Input format :
The input consists of a positive integer n.

Output format :
The output displays "Yes, Divisible", if n is divisible by the sum of its digits.

Otherwise, it displays "No, Not Divisible".*/

#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    int originalNum = n;
    int digitSum = 0;

    while (n > 0) {
        digitSum += n % 10;
        n /= 10;
    }

    if (originalNum % digitSum == 0) {
        printf("Yes, Divisible");
    } else {
        printf("No, Not Divisible");
    }

    return 0;
}
