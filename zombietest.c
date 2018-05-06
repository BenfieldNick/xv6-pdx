#ifdef CS333_P3P4
#include "user.h"

int
main(){
  printf(1, "Forking process.\n");
  int pid = fork();
  if(pid < 0){
    printf(2, "Forking error.\n");
    exit();
  }
  if(pid ==  0){
    //printf(1, "Child is sleeping.\n");
    //sleep(5000);
    printf(1, "Child exiting, creating zombie.\n");
    exit();
  }
  printf(1, "Parent is sleeping.  Check for zombies now.\n");
  sleep(15000);
  printf(1, "Parent is awake.  Reaping zombies.\n");
  exit();
}

#endif
