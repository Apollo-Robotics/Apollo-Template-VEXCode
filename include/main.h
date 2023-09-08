#ifndef _VEX_MAIN_H_
#define _VEX_MAIN_H_

#include "api.h"
/**
 * You should add more #includes here
 */

using namespace vex;

#ifdef __cplusplus
extern "C"
{
#endif
    void initialize(void);
    void autonomous(void);
    void usercontrol(void);
    int main(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#endif

#endif // _VEX_MAIN_H_