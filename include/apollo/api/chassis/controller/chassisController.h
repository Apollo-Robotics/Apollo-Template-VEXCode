#pragma once
#include <iostream>
#include "apollo/api/units/QLength.h"
#include "apollo/api/units/QAngle.h"
#include "apollo/api/units/QTime.h"
#include "apollo/api/util/util.h"

namespace apollo
{
  class chassisController
  {
  public:
    explicit chassisController() = default;
    virtual ~chassisController() = default;

    virtual void setMaxSpeed(double targetMaxSpeed) const = 0;
    virtual double getMaxSpeed() const = 0;
    virtual void setMinSpeed(double targetMinSpeed) const = 0;
    virtual double getMinSpeed() const = 0;
    virtual void setSpeed(double targetSpeed) const = 0;
    virtual double getSpeed() const = 0;
    /*
     *TODO: figure out better wording for set to actually move the drive. set implies the user is "setting" a default. some other terminology would help to clarify this notion.
     */

    virtual void setDriveSpeed(double targetSpeed) = 0;
    virtual void setTurnSpeed(double targetSpeed = 0);
    virtual void setSwingSpeed(double targetSpeed) = 0;

    virtual void setDriveTime(QTime targetTime, double targetSpeed) = 0;
    virtual void setTurnTime(QTime targetTime, double targetSpeed) = 0;
    virtual void setSwingTime(QTime targetTime, directionType direction, double targetSpeed) = 0;

    virtual void setDrivePID(QLength targetDistance, double targetSpeed) = 0;
    virtual void setTurnPID(QAngle targetAngle, double targetSpeed) = 0;
    virtual void setSwingPID(QAngle targetAngle, directionType direction, double targetSpeed) = 0;

    virtual void waitUntilSettled() = 0;
    virtual void waitUntilDistance(QLength targetDistace) = 0;
    virtual void waitUntilAngle(QAngle targetAngle) = 0;
    virtual void waitUntilTime(QTime targetTime) = 0;
    virtual void stop();

    /*
     * TODO: Add gear ratios, models, temps, other stats
     */
  };
} // namespace apollo