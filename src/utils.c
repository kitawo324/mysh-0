#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
  // char argv = StringArrayPtr
  // char *argv = StringArray
  // char **argv = String
  char str_buffer[50];
  int count_buffer;
  char* tempStr;
  int commandCount;
  char* tokStr;

  
  strcpy(str_buffer,command);
  commandCount = strlen(command);
  //str_buffer[0] = '\0';
  

  (*argv) =(char**)calloc(commandCount , sizeof(char*));
  
  tokStr  = strtok(str_buffer, " ");
  count_buffer = strlen(tokStr);
  
  (*argv)[0] = (char*)calloc(count_buffer , sizeof(char));
  count_buffer = 0;
  *argc = 1;
  
  
  
  while( tokStr = strtok(NULL, " "))
  {
    count_buffer = strlen(tokStr);
    (*argv)[(*argc)] = (char*)calloc(count_buffer , sizeof(char));
    count_buffer = 0;
    *argc +=1;
  }
  return ;
  
}

