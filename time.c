#ifdef CS333_P2
#include "types.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  if(argc == 1)
  {
    printf(1, "ran in 0.00\n");
  }
  else
  {
    int tic = uptime();
    int pid=fork();
    if(pid > 0){
      pid = wait();
    }
    else if((pid == 0))
    {
      exec(argv[1],argv+1);
      printf(2, "Error: Command either does not exist or did not exit properly.\n");
      kill(getppid());
      exit();
    }
    else
    {
      printf(2,"fork error\n");
    }
    int toc = uptime();
    int runtime = toc - tic;
    
    int seconds = runtime/1000;
    int m_seconds = runtime % 1000;
    
    char *m_seconds_zeros = "";
    if(m_seconds < 100)
    {
      m_seconds_zeros = "0";
    }
    if (m_seconds < 10)
    {
      m_seconds_zeros = "00";
    }
    printf(1,"%s ran in %d.%s%d\n",argv[1],seconds,m_seconds_zeros,
                                                                 m_seconds);
  }
  exit();
}

#endif
