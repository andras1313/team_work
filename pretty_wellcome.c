//What is your name? John Egg
//Welcome John Egg!
#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char *argv[]) { 
  char name[20]; printf("What is your name?"); 
  gets(name); 
  printf("Welcome %s!\n",name); 
  system("PAUSE"); 
  return 0; 
}