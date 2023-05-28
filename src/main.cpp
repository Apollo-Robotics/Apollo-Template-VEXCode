#include "main.h"
using namespace vex;
void pre_autonomous(void) {}
void autonomous_control(void) {}
void user_control(void) {
  while (true) {
    wait(10, vex::timeUnits::msec);
  }
}
int main() {
  competition_master.autonomous(autonomous_control);
  competition_master.drivercontrol(autonomous_control);
  pre_autonomous();
  while (true) {
    wait(100, vex::timeUnits::msec);
  }
}