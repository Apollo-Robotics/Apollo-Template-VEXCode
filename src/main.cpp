#include "main.h"
using namespace vex;
void pre_autonomous(void) {}
void autonomous(void) {}
void user_control(void) {
  while (true) {
    this_thread::sleep_for(10);
  }
}
int main() {
  pre_autonomous();
  while (true) {
    this_thread::sleep_for(100);
  }
}