#include "main.h"

void initialize(void) {}
void autonomous(void);
void usercontrol(void)
{
  while (1)
  {
    wait(20, msec);
  }
}
int main(void)
{
  initialize();
  while (true)
  {
    wait(100, msec);
  }
}
