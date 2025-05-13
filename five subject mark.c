#include <stdio.h>

int main() {
   int tamil,english,maths,science,social;
   printf("Enter tamil mark:\n");
   scanf("%d",& tamil);
   printf("Enter english mark:\n");
   scanf("%d",& english);
   printf("Enter maths mark:\n");
    scanf("%d",& maths);
     printf("Enter science mark:\n");
     scanf("%d",& science);
     printf("Enter social mark:\n");
     scanf("%d",& social);
     int total= tamil+english+maths+science+social;
     printf("total marks=%d\n",total);
     int avg=total/5;
     printf("total average=%d",avg);
     
     return 0;
}