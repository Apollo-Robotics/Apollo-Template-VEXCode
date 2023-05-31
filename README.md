# Apollo Template

[![License: MPL 2.0](https://img.shields.io/badge/License-MPL%202.0-brightgreen.svg)](https://opensource.org/licenses/MPL-2.0)

A custom template based on VEXCode V5 Pro for Visual Studio Code meant to handle basic robot functions

## Usage

1. Download the latest library of the template [here](https://github.com/Apollo-Robotics/Apollo-Template-VEXCode/archive/refs/heads/main.zip).
2. Open the project in Microsoft's Visual Studio Code (Make sure you have the [VEX Robotics extension](https://www.vexrobotics.com/vexcode/vscode-extension) installed and enabled!!!)
3. Finally, reference the class in any `.cpp` or `.h` file, such as `main.h`, like such:

```c++
extern Chassis chassis();
```

In order to configure your drivetrain, lookin main.cpp for the possible configurations and un-comment out which one you would like.

Than choose your desired control scheme in ```int main(){}``` !

And.... Your done!

It's not **_rocket science_**, it's **Robotics**!
