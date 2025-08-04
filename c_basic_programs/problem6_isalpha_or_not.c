#include<stdio.h>
#include<ctype.h>
int main(){
  char ch;
  scanf("%c",&ch);
  if(isalpha(ch)){
    printf("Alpha");
  }  
  else{
    printf("Not an alpha");
    
  }
  return 0;
}
