#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
  // argv = StringArrayPtr
  // *argv = StringArray
  // **argv = String= char *
  // ***argv = char
  char* tempStr;
  strcpy(tempStr,command);
  printf("!!! : %s",tempStr);
  //(**argv) = (char *)malloc(strlen(command));
  //(*argv)[0]  = strtok(tempStr, " ");
  //*argc = 1;
  //while( (*argv)[*argc] = strtok(NULL, " "))
  //{
     //*argc +=1;
  //}
  return ;
  
}
