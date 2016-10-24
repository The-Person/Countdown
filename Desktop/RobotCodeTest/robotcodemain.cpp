#include "WPILib.h"

class Robot : public IterativeRobot{
private:
class CANTalon* motor;
class Joystick* joy;
class DigitalInput* limitSwitch;
class AnalogGyro* gyro;
class Ultrasonic* ultra;

//functions
robotInit(
motor = new CANTalon(1);
motor->Set(0.5);
joy = new Joystick(0);
double axisValue = joy->GetRawAxis(1);
motor->Set(axisValue);
bool button = joy->GetRawButton(1);
limitSwitch = new DigitalInput(0);
liitSwitch->Get();
gyro = new AnalogGyro(3);
float angle = gyro ->GetAngle();
ultra = new Ultrasonic(1,2);
ultra->SetAutomaticMode(true);
int range = ultra->GetRangeInches();
) //When the Roborio de Janero turns on.
autonomousInit() //When autonomous mode is enabled.
autonomousPeriodic() //Every 100ms while autonomous mode is enabled
teleopInit() //When teleoperated mode is enabled
teleopPeriodic() //Every 100ms while teleoperated mode is enabled
disabledInit() //When the robot is disabled
disabledPeriodic() //Every 100ms while the robot is disabled
testInit() //When the test mode is enabled on the robot (we have never used this)
testPeriodic() //Every 100ms in test mode (we have never used this)

}
START_ROBOT_CLASS(Robot);
