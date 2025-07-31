#include<stdio.h>
int main(){
  int pos=2;
  switch(pos){
    case 1:
      printf("Gold");
      break;
    case 2:
      printf("Silver");
      break;
    case 3:
      printf("Bronze");
      break;
    default:
      printf("No Medal");
  }
  return 0;
}
