#ifdef CS333_P5
#include "types.h"
#include "user.h"
int
main(int argc, char* argv[])
{
  int gid;
  if(argc != 3){
  	printf(1,"Invalid number of arguments\n");
  	printf(1,"chgrp [gid] [path]\n");
  	exit();
  }
  //checks to make sure that gid is numeric
  int i;
  for(i=0;i<strlen(argv[1]);i++){
  	if(argv[1][i] < '0' || argv[1][i] > '9'){
  		printf(1,"gid must be a numeric value.\n");
  		exit();
  	}
  }
  
  gid = atoi(argv[1]);
  if( gid < 0 || gid > USHRT_MAX){
  	printf(1,"Invalid gid: out of range.");
  	exit();
  }

  int rc = chgrp(argv[2], gid);

  if(rc){
  	printf(1,"chgrp failed.");
  	exit();
  }

  exit();
}

#endif
