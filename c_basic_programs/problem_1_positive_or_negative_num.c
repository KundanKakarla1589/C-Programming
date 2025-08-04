#include<stdio.h>
int main(){
  int num;
  if(scanf("%d",&num) == 1){
    if(num>=0){
      printf("Positive Number");
    }
    else{
      printf("Negative Number");
    }
  }
  else{
    printf("Enter the valid input");
  }
  return 0;
}
