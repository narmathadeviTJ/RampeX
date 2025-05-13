#include <stdio.h>

int main() {
    int a,b=18;
    printf("Enter age :");
    scanf("%d",&a);
    printf("your age is %d so you are eligible for voting:%d\n",a,a>=b);
    

    return 0;
}