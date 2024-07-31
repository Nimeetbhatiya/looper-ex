// Q.2 Digit Counter
// Develop a Program to count the total number of digits in a number.

#include <stdio.h>

int main() {
    int num,count=0;
    printf("enter the value");
    scanf("%d",&num);

    while(num>=1){
        num/=10;
        count++;
    }

    printf("%d",count);

    return 0;
}
