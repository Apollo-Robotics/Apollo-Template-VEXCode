#include "main.h"
using namespace vex;
vex::brain Brain;
int main()
{

	Brain.Screen.printAt(10, 50, "Hello V5");

	while (1)
	{
		this_thread::sleep_for(10);
	}
}
