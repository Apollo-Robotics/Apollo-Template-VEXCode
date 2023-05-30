#pragma once
#include "vex_units.h"
namespace apollo {
class chassisModel {
 public:
  struct joystickDeadzone {
    double axis1;
    double axis2;
    double axis3;
    double axis4;
  };
  joystickDeadzone currentDeadzone;
  virtual void arcade() = 0;
  virtual void tank() = 0;
  virtual void resetSensors() = 0;
  virtual void setBrakeMode(vex::brakeType brakeMode) = 0;
  virtual vex::brakeType getBrakeMode() = 0;
  virtual void setMaxVelocity(double targetMaxVoltage) const = 0;
  virtual double getMaxVelocity() const = 0;
  virtual void setMaxVoltage(double targetMaxVoltage) const = 0;
  virtual double getMaxVoltage() const = 0;
};
}  // namespace apollo
