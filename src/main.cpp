#include "main.h"
using namespace vex;
competition Competition;

void initialize(void)
{
}
void autonomous_control(void)
{
}
void user_control(void)
{
  while (1)
  {
    wait(20, msec);
  }
}
int main()
{
  Competition.autonomous(autonomous_control);
  Competition.drivercontrol(user_control);
  initialize();
  while (true)
  {
    wait(100, msec);
  }
}
