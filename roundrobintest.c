#ifdef CS333_P3P4

#include "types.h"
#include "user.h"

int
main(){
  int pid;
  for(int i = 0; i<10; i++){
      pid = fork();
      if(pid < 0){
        printf(2, "Fork Error! Abort Abort\n");
      }
      if(pid == 0){
        while(1);
      }
  }
  wait();
  exit();
}

#endif
