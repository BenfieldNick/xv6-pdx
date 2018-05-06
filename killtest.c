#ifdef CS333_P3P4

#include "user.h"
#include "types.h"


int
main(){

  printf(1, "forking process\n");

  int rc = fork();
  if(rc == 0){
    printf(1,"Child is asleep\n");
    sleep(10000);  //sleep for 5 seconds to allow user kill
  }  
  else if(rc < 0){
    printf(2,"Fork error");
    exit();
  }
  else{
    printf(1,"Parent is asleep, kill child process before I wake up!\n");
    sleep(10000); // allow user to see that the parent is a zombie
    wait();
  }

  exit();
}
#endif
