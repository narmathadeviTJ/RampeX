#include <stdio.h>

int main() {
    int a=5;
    int b=a++;
    int c=9;
    int d=c--;
    printf("%d post increment of %d\n",a,c);
    printf("%d post decrement of %d\n",a,c);

    return 0;
}