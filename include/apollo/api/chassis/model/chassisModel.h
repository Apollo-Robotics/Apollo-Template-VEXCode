#pragma once
#include "vex_controller.h"
#include "vex_units.h"
namespace apollo {
class chassisModel {
 public:
  // TODO: Global Deadzone
  virtual void setDeadzone(double targetDeadzone) = 0;
  virtual void setArcade(vex::controller::axis forwardAxis,
                         vex::controller::axis turnAxis) = 0;
  virtual void setTank(vex::controller::axis leftAxis,
                       vex::controller::axis rightAxis) = 0;
  // virtual void setCurvature()=0;
  virtual void setBrakeMode(vex::brakeType brakeMode) = 0;
  virtual void setMaxVelocity(double targetMaxVoltage) = 0;
  virtual void setMaxVoltage(double targetMaxVoltage) = 0;
  virtual void setCartridge(vex::gearSetting cartridge) = 0;
  virtual vex::brakeType getBrakeMode() const = 0;
  virtual int getLeftSensorPostion() const = 0;
  virtual double getLeftMotorVelocity() const = 0;
  virtual double getLeftMotorCurrent() const = 0;
  virtual int getRightSensorPostion() const = 0;
  virtual double getRightMotorVelocity() const = 0;
  virtual double getRightMotorCurrent() const = 0;
  virtual double getMaxVelocity() const = 0;
  virtual double getMaxVoltage() const = 0;
  virtual bool isLeftMotorOverCurrent() const = 0;
  virtual bool isRightMotorOverCurrent() const = 0;
  virtual void resetSensors() = 0;
};
}  // namespace apollo
