#include <string.h>
#include <stdio.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  printf("do_cd\n");
  // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  printf("do_pwd\n");
  // TODO: Fill it!

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
  if(strcmp(argv[0],"cd")==0)
    return 1;
  else
    return 0;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
  if(strcmp(argv[0],"pwd")==0)  
    return 1;
  else
    return 0;
}
