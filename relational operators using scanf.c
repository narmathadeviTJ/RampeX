#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter two values");
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("%d is lessthen %d",a,b);
    }
    else if(a>b){
        printf("%d is greaterthen %d",a,b);
    }
    else if(a==b){
        printf("%d is equalto %d",a,b);
    }
    else if(a!=b){
        printf("%d is notequalto %d",a,b);
    }

    return 0;
}