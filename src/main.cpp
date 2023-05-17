#include "main.h"
using namespace vex;
void initialize(void) {}
void autonomous_control(void) {}
void user_control(void) {}
int main()
{
	while (true)
	{
		this_thread::sleep_for(10);
	}
}
