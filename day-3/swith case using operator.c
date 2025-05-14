#include <stdio.h>

int main() {
    char op;
    int a=5,b=7;
    printf("Enter operator");
    scanf("%c",&op);
    switch(op){
        case '+':
         printf("result=%d\n",a+b);
         break;
         case '-':
          printf("result=%d\n",a-b);
          break;
          case '*':
           printf("result=%d\n",a*b);
         break;
         case '/':
          printf("result=%.2f\n",a/b);
         break;
         
    }


    return 0;
}