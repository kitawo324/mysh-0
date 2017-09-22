#include "utils.h"
#include <string.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
  // char *argv = String
  // char **argv = StringPtr = (**argv)[0]
  // char ***argv = StringPtrArray
  **argv  = strtok(command, " ");
  *argc = 1;
  while( **argv = strtok(NULL, " "))
  {
     *argc +=1;
  }
  return 0;
  
}
