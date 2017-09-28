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
  char str_buffer[50]={0,};
  int count_buffer;
  int commandCount;
  char* tokStr;
  char* tempStr;
  if(strstr(command,"pwd") != NULL)
    strcpy(str_buffer, strstr(command,"pwd"));
  else if (strstr(command,"cd") != NULL)
  {
    strcpy(str_buffer, strstr(command,"cd"));
  }
  else if (strstr(command,"exit") != NULL)
  {
    *argc = 1;
    (*argv) = (char**)calloc(1, sizeof(char*));
    (*argv)[0] = (char*)calloc(1, sizeof(char));
    strcpy((*argv)[0],"exit");
    return;
  }
  else
  {
    *argc = 1;
    (*argv) = (char**)calloc(1, sizeof(char*));
    (*argv)[0] = (char*)calloc(1,sizeof(char));
    strcpy((*argv)[0],"");
    return;
  }
  strcpy(str_buffer,command);
  commandCount = strlen(command);
  //str_buffer[0] = '\0';
  
  (*argv) =(char**)calloc(1 , sizeof(char*));
  tokStr  = strtok(str_buffer, "\n\t ");
  count_buffer = strlen(tokStr);
  if(count_buffer < 2)
    while(1)
    {
      tokStr = strtok(NULL, " ");
      count_buffer = strlen(tokStr);
      if(count_buffer >1)
        break;
    }
  (*argv)[0] = (char*)calloc(count_buffer , sizeof(char));
  strcpy((*argv)[0],tokStr);
  count_buffer = 0;
  *argc = 1;
  
  
  while( tokStr = strtok(NULL,"\n\t ") )
  {
    count_buffer = strlen(tokStr);
    (*argv) = (char**)realloc((*argv),((*argc)+1)*sizeof(char*));
    (*argv)[(*argc)] = (char*)calloc(count_buffer , sizeof(char));
    strcpy((*argv)[(*argc)],tokStr);
    count_buffer = 0;
    *argc +=1;
  }
  return ;
  
}

