
#include "vex.h"
#include "auton.h"

using namespace vex;

void moveForwardSimple( int speed ){
  FrontLeft.spin(fwd, speed, pct);
  BackLeft.spin(fwd, speed, pct);
  FrontRight.spin(fwd, speed, pct);
  BackRight.spin(fwd, speed, pct);

}

void moveForwardWalk (int speed, double distanceIN){
  double wheelDiameter = 3.25;
  double circumference = 3.14 * wheelDiameter;
  double degreesToRotate = ((360 * distanceIN) / circumference);

 FrontLeft.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
 FrontRight.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
 BackLeft.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
 BackRight.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct);

}

void turnLeftSimple ( int speed ){
  FrontLeft.spin(fwd, speed, pct);
  BackLeft.spin(fwd, speed, pct);
  FrontRight.spin(fwd, speed*-1, pct);
  BackRight.spin(fwd, speed*-1, pct);
}

void turnRightSimple ( int speed ){
  FrontLeft.spin(fwd, speed*-1, pct);
  BackLeft.spin(fwd, speed*-1, pct);
  FrontRight.spin(fwd, speed, pct);
  BackRight.spin(fwd, speed, pct);
}