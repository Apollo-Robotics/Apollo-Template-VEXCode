#ifndef _VEX_API_H_
#define _VEX_API_H_

#ifdef __cplusplus
#include <cerrno>
#include <cmath>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#else /* (not) __cplusplus */
#include <errno.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#endif /* __cplusplus */

#define VEXCODE_VERSION_MAJOR 2
#define VEXCODE_VERSION_MINOR 0
#define VEXCODE_VERSION_PATCH 5
#define VEXCODE_VERSION_STRING "2.0.5"

#include "v5.h"
#include "v5_api.h"
#include "v5_apiprivate.h"
#include "v5_apitypes.h"
#include "v5_apiuser.h"
#include "v5_color.h"
#include "v5_cpp.h"
#include "v5_vcs.h"
#include "vex_brain.h"
#include "vex_color.h"
#include "vex_competition.h"
#include "vex_console.h"
#include "vex_controller.h"
#include "vex_device.h"
#include "vex_distance.h"
#include "vex_drivetrain.h"
#include "vex_electromag.h"
#include "vex_event.h"
#include "vex_global.h"
#include "vex_gps.h"
#include "vex_imu.h"
#include "vex_mevent.h"
#include "vex_motor.h"
#include "vex_motorgroup.h"
#include "vex_optical.h"
#include "vex_roboticarm.h"
#include "vex_rotation.h"
#include "vex_smartdrive.h"
#include "vex_task.h"
#include "vex_thread.h"
#include "vex_timer.h"
#include "vex_triport.h"
#include "vex_units.h"
#include "vex_vexlink.h"
#include "vex_vision.h"

#ifdef __cplusplus
#endif

#endif // _VEX_API_H_