#include <stdio.h>

int main() {
    int age;
    int licence;
        printf("enter your age");
        scanf("%d",&age);
        printf("enter your license");
        scanf("%d",&licence);
        if(age>=18 && licence == 1){
            printf("you are eligible");
        }
        else{
        printf("you are not eligible");
}
    
    
    return 0;
}