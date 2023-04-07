#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//printing a string of characters

int main(void) 
{
  int count = 0;
  char name[500];
  printf("Enter Sentence String:\t");
  gets(name);
  count = strlen(name);
  printf("\nSentence lenght is = %d\n", count);

  printf("\n\nEnd of program\n");
  sleep(20);
  system("clear");
  printf("Welcome, User");
  
  
  
  return 0;
}