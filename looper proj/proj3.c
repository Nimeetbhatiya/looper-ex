#include<stdio.h>
int main(){
    int num=657,first,last;

    last=num%10;

    while(num>=1){
        if(num<=9){
           first=num;
        }
      num/=10;
    }

    printf("%d  %d",first,last);

    printf("\n\n sum of first and last value: %d",last+first);
    return 0;
}