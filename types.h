typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;
// TPS is an experiment to increase ticks per second
// must be here to be visible to user space (hack)
#define TPS 1000
#define SCHED_INTERVAL (TPS/100)

#ifdef CS333_P5
#define USHRT_MAX 65535
#endif
