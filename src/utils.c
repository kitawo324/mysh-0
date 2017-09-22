#include "utils.h"
#include <string.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
  // char *argv = String
  // char **argv = StringArray
  // char ***argv = StringArrayPtr
  (*argv)[0]  = strtok(command, " ");
  *argc = 1;
  while( (*argv)[*argc] = strtok(NULL, " "))
  {
     *argc +=1;
  }
  return 0;
  
}
