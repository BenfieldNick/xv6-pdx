#ifdef CS333_P5
#include "types.h"
#include "user.h"
int
main(int argc, char* argv[])
{
  int uid;
  if(argc != 3){
  	printf(1,"Invalid number of arguments\n");
  	printf(1,"chown [uid] [path]\n");
  	exit();
  }
  //checks to make sure that uid is numeric
  int i;
  for(i=0;i<strlen(argv[1]);i++){
  	if(argv[1][i] < '0' || argv[1][i] > '9'){
  		printf(1,"uid must be a numeric value.\n");
  	  exit();
  	}
  }
  
  uid = atoi(argv[1]);
  if( uid < 0 || uid > USHRT_MAX){
  	printf(1,"Invalid uid: out of range.");
  	exit();
  }

  int rc = chown(argv[2], uid);

  if(rc){
  	printf(1,"chown failed.\n");
  	exit();
  }

  exit();
}

#endif
