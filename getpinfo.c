#include "types.h"
#include "user.h"
#include "pstat.h"

int main(int argc, char*argv[])
{
  struct pstat ps;

  if(getpinfo(&ps)){
    printf(2, "getpinfo failed\n");
    exit();
  }

  for(int i = 0; i < NPROC; i++){
    printf(2, "PID:%d,\t In Use:%d,\t Tickets:%d,\t Ticks:%d,\n", ps.pid[i], ps.inuse[i], ps.tickets[i], ps.ticks[i]);
  }
  exit();
}
