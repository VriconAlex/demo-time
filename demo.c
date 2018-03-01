#include <stdio.h>

void itertext(int n, char *text){
  int i = 0;
  if(n > 0){
    for(i= 0; i < n; i++){
      printf("%d %s\n", i, text);
    }
  }
  return;
}

int main(){

  printf("Hello, World!\n");
  
  return 0;
}
