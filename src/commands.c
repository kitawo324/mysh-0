#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  char strBuf[1024] = {0,};
  int i;
  int res;
  getcwd(strBuf,sizeof(strBuf));
  res = chdir(argv[1]);
  if (res == 0)
    return 1;
  else
    return 0;
  // TODO: Fill it!
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  char strBuf[1024];
  getcwd(strBuf,sizeof(strBuf));
  printf("%s",strBuf);
  // TODO: Fill it!

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
  if(strcmp(argv[0],"cd")==0)
    if(argc == 2)
      return 1;
    else
      return 0;
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
