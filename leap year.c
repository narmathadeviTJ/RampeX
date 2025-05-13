#include<stdio.h>
int main() {
  int year;
  printf("Enter year:");
  scanf("%d",&year);
  if(year%4==0 && year%100!=0){
      printf("it's a leap year");
  }
  else{
      printf("it's a not leap year");
}
return 0;
}