#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  switch(x){
    case 1:
      x=4;
    case 2:
      x=8;
    case 3:
      x=7;
      break;
    case 4:
      x=3;
  }
  printf("%d",x);
  return 0;
}
