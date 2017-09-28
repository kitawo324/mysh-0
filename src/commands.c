#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  char strBuf[1024] = {0,};
  char path[1024] = "";
  char* chrStr;
  int i=0;
  int res;
  getcwd(strBuf,sizeof(strBuf));
  if (strcmp(argv[1],"..")==0)
  {
    chrStr = strchr(strBuf,'/');
    while(chrStr != NULL)
    {
      i = chrStr-strBuf+1;
      chrStr = strchr(chrStr+1,'/');
    }
    strncat(path,strBuf,i);
    //printf("%s\n",path);
    res = chdir(path);
    if(res == 0)
      return 0;
    else
      return 1;
  }
  else if(strcmp(argv[1],".")==0)
  {
    return 0;
  }
  else
    return 0;
  // TODO: Fill it!
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  char strBuf[1024];
  getcwd(strBuf,sizeof(strBuf));
  printf("%s\n",strBuf);
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
    if(argc == 1)
      return 1;
    else  
      return 0;
  else
    return 0;
}
