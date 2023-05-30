#pragma once
#include <vector>

#include "apollo/api/chassis/model/chassisModel.h"
#include "vex_motor.h"
namespace apollo {
class tankChassisModel : public chassisModel {
  tankChassisModel(std::vector<vex::motor> leftDriveMotors,
                   std::vector<vex::motor> rightDriveMotors);
  tankChassisModel(std::vector<vex::motor> leftDriveMotors,
                   std::vector<vex::motor> rightDriveMotors,
                   std::vector<int> leftEncoderTracker,
                   std::vector<int> rightEncoderTracker);
};
}  // namespace apollo