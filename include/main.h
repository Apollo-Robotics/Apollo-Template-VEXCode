#ifndef _VEX_MAIN_H_
#define _VEX_MAIN_H_

#include "api.h"

/**
 * You should add more #includes here
 */

using namespace vex;

#ifdef __cplusplus
extern "C" {
#endif
void autonomous(void);
void initialize(void);
void disabled(void);
void competition_initialize(void);
void opcontrol(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
/**
 * You can add C++-only headers here
 */
//#include <iostream>
#endif

#endif // _VEX_MAIN_H_
