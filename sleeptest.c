#ifdef CS333_P3P4

#include "user.h"

// Loops for approximately duration milliseconds.
void
loop(int duration){

  int elapsed_time = 0;
  int tic = uptime();
  int toc = 0;
  while(elapsed_time < duration){
    toc = uptime();
    elapsed_time = toc - tic;
  }
}

int
main(){
  printf(1,"Running for 5 seconds.\n");
  loop(5000);
  printf(1,"Sleeping for 5 seconds.\n");
  sleep(5000);
  printf(1,"Waking up, and loop running for 5 more seconds.\n");
  loop(5000);
  printf(1,"Sleeping 5 more seconds.\n");
  sleep(5000);
  printf(1,"All done.\n");
  exit();
}

#endif
