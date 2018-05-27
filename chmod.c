#ifdef CS333_P5
#include "types.h"
#include "user.h"
int
main(int argc, char* argv[])
{
  int mode;
  if(argc != 3){
  	printf(1,"Invalid number of arguments\n");
  	printf(1,"chmod [mode] [path]\n");
  	exit();
  }
  
  if(strlen(argv[1]) != 4){
  	printf(1,"Invalid mode: must be a 4 digit octal number.\n");
  	exit();
  }

  int i;
  for(i=0;i<strlen(argv[1]);i++){
    if((argv[1][i])< '0' || (argv[1][i]) > '7'){
      printf(1,"Invalid mode: must be a 4 digit octal number.\n");
      exit();
    }
  }

  mode = atoo(argv[1]);


  int rc = chmod(argv[2], mode);

  if(rc){
  	printf(1,"chmod failed.\n");
  	exit();
  }

  exit();
}

#endif
