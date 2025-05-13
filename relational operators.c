#include <stdio.h>

int main() {
    int a=200;
    int b=140;
    if(a<b){
        printf("%d is less then %d",a,b);
    }
    else if(a!=b){
        printf("%d is notequalto %d",a,b);
    }
    else if(a==b){
        printf("%d is equalto %d",a,b);
    }
    else if(a>b){
        printf("%d is greater then %d",a,b);
    }
    

    return 0;
}