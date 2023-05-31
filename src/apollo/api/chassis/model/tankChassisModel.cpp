#include "apollo/api/chassis/model/tankChassisModel.h"

#include "vex_controller.h"
#include "vex_motor.h"
#include "vex_rotation.h"
#include "vex_triport.h"
#include "vex_units.h"
namespace apollo {
tankChassisModel::tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                                   std::vector<int32_t> rightDriveMotorPorts,
                                   int32_t inertialSensorPort) {
  chassisTrackerType = motorIntegrated;
  inertialSensor = &vex::inertial(inertialSensorPort);
  for (auto i : leftDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    leftDriveMotors.push_back(temp);
  }
  for (auto i : rightDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    rightDriveMotors.push_back(temp);
  }
}
tankChassisModel::tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                                   std::vector<int32_t> rightDriveMotorPorts,
                                   int32_t inertialSensorPort,
                                   vex::triport::port leftEncoderTrackerPort,
                                   vex::triport::port rightEncoderTrackerPort) {
  chassisTrackerType = encoderTracker;
  inertialSensor = &vex::inertial(inertialSensorPort);
  leftEncoderTracker = &vex::encoder(leftEncoderTrackerPort);
  rightEncoderTracker = &vex::encoder(rightEncoderTrackerPort);
  for (auto i : leftDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    leftDriveMotors.push_back(temp);
  }
  for (auto i : rightDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    rightDriveMotors.push_back(temp);
  }
}
tankChassisModel::tankChassisModel(
    std::vector<int32_t> leftDriveMotorPorts,
    std::vector<int32_t> rightDriveMotorPorts, int32_t inertialSensorPort,
    vex::triport::port leftEncoderTrackerPort,
    vex::triport::port rightEncoderTrackerPort,
    vex::triport::port centerEncoderTrackerPort) {
  chassisTrackerType = encoderTracker;
  inertialSensor = &vex::inertial(inertialSensorPort);
  leftEncoderTracker = &vex::encoder(leftEncoderTrackerPort);
  rightEncoderTracker = &vex::encoder(rightEncoderTrackerPort);
  centerEncoderTracker = &vex::encoder(centerEncoderTrackerPort);
  for (auto i : leftDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    leftDriveMotors.push_back(temp);
  }
  for (auto i : rightDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    rightDriveMotors.push_back(temp);
  }
}
tankChassisModel::tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                                   std::vector<int32_t> rightDriveMotorPorts,
                                   int32_t inertialSensorPort,
                                   int32_t leftRotationTrackerPort,
                                   int32_t rightRotationTrackerPort) {
  chassisTrackerType = rotationTracker;
  inertialSensor = &vex::inertial(inertialSensorPort);
  leftRotationTracker = &vex::rotation(leftRotationTrackerPort);
  rightRotationTracker = &vex::rotation(rightRotationTrackerPort);
  for (auto i : leftDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    leftDriveMotors.push_back(temp);
  }
  for (auto i : rightDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    rightDriveMotors.push_back(temp);
  }
}
tankChassisModel::tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                                   std::vector<int32_t> rightDriveMotorPorts,
                                   int32_t inertialSensorPort,
                                   int32_t leftRotationTrackerPort,
                                   int32_t rightRotationTrackerPort,
                                   int32_t centerRotationTrackerPort) {
  chassisTrackerType = rotationTracker;
  inertialSensor = &vex::inertial(inertialSensorPort);
  leftRotationTracker = &vex::rotation(leftRotationTrackerPort);
  rightRotationTracker = &vex::rotation(rightRotationTrackerPort);
  centerRotationTracker = &vex::rotation(centerRotationTrackerPort);
  for (auto i : leftDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    leftDriveMotors.push_back(temp);
  }
  for (auto i : rightDriveMotorPorts) {
    vex::motor temp = vex::motor(i);
    rightDriveMotors.push_back(temp);
  }
}
void tankChassisModel::setDeadzone(const double targetDeadzone) {}
void tankChassisModel::setArcade(const vex::controller::axis forwardAxis,
                                 const vex::controller::axis turnAxis) {
  if ((std::abs(forwardAxis.value()) > globalDeadzone) ||
      (std::abs(turnAxis.value()) > globalDeadzone)) {
        for(auto i:)
  }
}
void tankChassisModel::setTank(const vex::controller::axis leftAxis,
                               const vex::controller::axis rightAxis) {}
// void tankChassisModel::setCurvature(){}
void tankChassisModel::setBrakeMode(vex::brakeType brakeMode) {
  currentBrakeMode = brakeMode;
  for (auto i : leftDriveMotors) {
    i.setBrake(brakeMode);
  }
  for (auto i : rightDriveMotors) {
    i.setBrake(brakeMode);
  }
}
void tankChassisModel::setMaxVelocity(const double targetMaxVelocity) {
  if (targetMaxVelocity <= 0) {
    chassisMaxVoltage = 0;
  } else
    chassisMaxVoltage = targetMaxVelocity;
}
void tankChassisModel::setMaxVoltage(const double targetMaxVoltage) {
  if (targetMaxVoltage <= 0) {
    chassisMaxVoltage = 0;
  } else
    chassisMaxVoltage = targetMaxVoltage;
}
void tankChassisModel::setCartridge(const vex::gearSetting cartridge) {
  for (auto i : leftDriveMotors) {
    // i;
  }
  for (auto i : rightDriveMotors) {
    // i;
  }
}
vex::brakeType tankChassisModel::getBrakeMode() const {
  return currentBrakeMode;
}
int tankChassisModel::getLeftSensorPostion() const { return; }
double tankChassisModel::getLeftMotorVelocity() const {
  double totalVelocity;
  for (auto i : leftDriveMotors) {
    totalVelocity += i.velocity(vex::velocityUnits::rpm);
  }
  return totalVelocity / leftDriveMotors.size();
}
double tankChassisModel::getLeftMotorCurrent() const {
  double totalCurrent;
  for (auto i : leftDriveMotors) {
    totalCurrent += i.current(vex::currentUnits::amp);
  }
  return totalCurrent / leftDriveMotors.size();
}
int tankChassisModel::getRightSensorPostion() const { return; }
double tankChassisModel::getRightMotorVelocity() const {
  double totalVelocity;
  for (auto i : rightDriveMotors) {
    totalVelocity += i.velocity(vex::velocityUnits::rpm);
  }
  return totalVelocity / rightDriveMotors.size();
}
double tankChassisModel::getRightMotorCurrent() const {
  double totalCurrent;
  for (auto i : rightDriveMotors) {
    totalCurrent += i.current(vex::currentUnits::amp);
  }
  return totalCurrent / rightDriveMotors.size();
}
double tankChassisModel::getMaxVelocity() const { return chassisMaxVelocity; }
double tankChassisModel::getMaxVoltage() const { return chassisMaxVoltage; }
bool tankChassisModel::isLeftMotorOverCurrent() const {
  for (auto i : leftDriveMotors) {
    if (i.getMotorType() == 1) {
      if (11 / i.voltage(vex::voltageUnits::volt) >= i.current()) {
        return true;
        break;
      }
    } else if (i.getMotorType() == 0) {
      if (5.5 / i.voltage(vex::voltageUnits::volt) >= i.current()) {
        return true;
        break;
      }
    } else {
      return false;
    }
  }
}
bool tankChassisModel::isRightMotorOverCurrent() const {
  for (auto i : rightDriveMotors) {
    if (i.getMotorType() == 1) {
      if (11 / i.voltage(vex::voltageUnits::volt) >= i.current()) {
        return true;
        break;
      }
    } else if (i.getMotorType() == 0) {
      if (5.5 / i.voltage(vex::voltageUnits::volt) >= i.current()) {
        return true;
        break;
      }
    } else {
      return false;
    }
  }
}
void tankChassisModel::resetSensors() {
  for (auto i : leftDriveMotors) {
    i.resetPosition();
  }
  for (auto i : rightDriveMotors) {
    i.resetPosition();
  }
  leftEncoderTracker->resetRotation();
  rightEncoderTracker->resetRotation();
  centerEncoderTracker->resetRotation();
  leftRotationTracker->resetPosition();
  rightRotationTracker->resetPosition();
  centerRotationTracker->resetPosition();
}
}  // namespace apollo