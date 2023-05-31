#pragma oncets
#include <vector>

#include "api.h"
#include "apollo/api/chassis/model/chassisModel.h"
#include "vex_controller.h"
#include "vex_imu.h"
#include "vex_motor.h"
#include "vex_rotation.h"
#include "vex_triport.h"
#include "vex_units.h"
namespace apollo {
class tankChassisModel : public chassisModel {
 public:
  tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                   std::vector<int32_t> rightDriveMotorPorts,
                   int32_t inertialSensorPort);
  tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                   std::vector<int32_t> rightDriveMotorPorts,
                   int32_t inertialSensorPort,
                   vex::triport::port leftEncoderTracker,
                   vex::triport::port rightEncoderTracker);
  tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                   std::vector<int32_t> rightDriveMotorPorts,
                   int32_t inertialSensorPort,
                   vex::triport::port leftEncoderTracker,
                   vex::triport::port rightEncoderTracker,
                   vex::triport::port centerEncoderTracker);
  tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                   std::vector<int32_t> rightDriveMotorPorts,
                   int32_t inertialSensorPort, int32_t leftRotationTracker,
                   int32_t rightRotationTracker);
  tankChassisModel(std::vector<int32_t> leftDriveMotorPorts,
                   std::vector<int32_t> rightDriveMotorPorts,
                   int32_t inertialSensorPort, int32_t leftRotationTracker,
                   int32_t rightRotationTracker, int32_t centerRotationTracker);
  void setDeadzone(double targetDeadzone) override;
  void setArcade(vex::controller::axis forwardAxis,
                 vex::controller::axis turnAxis) override;
  void setTank(vex::controller::axis leftAxis, vex::controller::axis rightAxis) override;
  // void setCurvature() override;
  void setBrakeMode(vex::brakeType brakeMode) override;
  void setMaxVelocity(double targetMaxVoltage) override;
  void setMaxVoltage(double targetMaxVoltage) override;
  void setCartridge(vex::gearSetting cartridge) override;
  vex::brakeType getBrakeMode() const override;
  int getLeftSensorPostion() const override;
  double getLeftMotorVelocity() const override;
  double getLeftMotorCurrent() const override;
  int getRightSensorPostion() const override;
  double getRightMotorVelocity() const override;
  double getRightMotorCurrent() const override;
  double getMaxVelocity() const override;
  double getMaxVoltage() const override;
  bool isLeftMotorOverCurrent() const override;
  bool isRightMotorOverCurrent() const override;
  void resetSensors() override;
  vex::brakeType currentBrakeMode;
  int globalDeadzone = 5;

 protected:
  std::vector<vex::motor> leftDriveMotors;
  std::vector<vex::motor> rightDriveMotors;
  vex::inertial* inertialSensor;
  vex::encoder* leftEncoderTracker;
  vex::encoder* rightEncoderTracker;
  vex::encoder* centerEncoderTracker;
  vex::rotation* leftRotationTracker;
  vex::rotation* rightRotationTracker;
  vex::rotation* centerRotationTracker;
  double chassisMaxVelocity;
  double chassisMaxVoltage;
  double chassisGearRatio;
  double chassisCartridge;
  double chassisWheelDiameter;
  double chassisWheelCircumference;
  double trackerGearRatio;
  double trackerCartridge;
  double trackerWheelDiameter;
  double trackerWheelCircumference;

 private:
  int motorIntegrated = 1;
  int encoderTracker = 2;
  int rotationTracker = 3;
  int chassisTrackerType = motorIntegrated;
};
}  // namespace apollo