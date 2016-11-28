#include "WPILib.h"

class Robot : public IterativeRobot{
private:
RobotDrive* drive;
CANTalon *frontLeft, *frontRight, *rearLeft, *rearRight, *lift;
Joystick* joy;
DigitalInput* limitSwitch;
Ultrasonic* ultra;
AnalogGyro* gyro;

robotInit(){
    frontRight = new CANTalon(0);
    frontLeft = new CANTalon(1);
    rearRight = new CANTalon(2);
    rearRight = new CANTalon(3);
    lift = new CANTalon(4);
    joy = new Joystick(0);
    drive = new RobotDrive(frontLeft,rearLeft,frontRight,rearRight);
    drive->TankDrive(leftSide,rightSide);
    limitSwitch = new DigitalInput(0);
    ultra = new Ultrasonic(1,2);
    gyro = new AnalogGyro(3);
}

teleopPeriodic(){
    double axisValue = joy->GetRawAxis(1);
    double axisValue = joy->GetRawAxis(5);
    limitSwitch->Get();
    if limitSwitch = 1 {
    lift_>Set(1)}
    motor->Set(0.5);
    float angle = gyro ->GetAngle();
    ultra->SetAutomaticMode(true);
    if angle == 10 {
    drive->TankDrive(-0.5, -0.5);
    }
    int range = ultra->GetRangeInches();
    if range == 20 {
    lift->Set(-1);
    }

    }

};
START_ROBOT_CLASS(Robot);
