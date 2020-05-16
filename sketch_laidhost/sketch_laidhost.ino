#include <SwitchControlLibrary.h>

void intervaldelay()
{
  delay(50);
}
void afterdelay()
{
  delay(200);
}
void up()
{
  SwitchControlLibrary().MoveHat(0);
  intervaldelay();
  SwitchControlLibrary().MoveHat(8);
  afterdelay();
}
void right()
{
  SwitchControlLibrary().MoveHat(2);
  intervaldelay();
  SwitchControlLibrary().MoveHat(8);
  afterdelay();
}
void down()
{
  SwitchControlLibrary().MoveHat(4);
  intervaldelay();
  SwitchControlLibrary().MoveHat(8);
  afterdelay();
}
void left()
{
  SwitchControlLibrary().MoveHat(6);
  intervaldelay();
  SwitchControlLibrary().MoveHat(8);
  afterdelay();
}
void A()
{
  SwitchControlLibrary().PressButtonA();
  intervaldelay();
  SwitchControlLibrary().ReleaseButtonA();
  afterdelay();
}
void B()
{
  SwitchControlLibrary().PressButtonB();
  intervaldelay();
  SwitchControlLibrary().ReleaseButtonB();
  afterdelay();
}
void X()
{
  SwitchControlLibrary().PressButtonX();
  intervaldelay();
  SwitchControlLibrary().ReleaseButtonX();
  afterdelay();
}
void R()
{
  SwitchControlLibrary().PressButtonR();
  intervaldelay();
  SwitchControlLibrary().ReleaseButtonR();
  afterdelay();
}
void L()
{
  SwitchControlLibrary().PressButtonL();
  intervaldelay();
  SwitchControlLibrary().ReleaseButtonL();
  afterdelay();
}
void Home()
{
  SwitchControlLibrary().PressButtonHome();
  intervaldelay();
  SwitchControlLibrary().ReleaseButtonHome();
  delay(1000);
}
void setup()
{
  SwitchControlLibrary();
  delay(2000);
  L();
  R();
  L();
  R();
}
int TIMES = 51;
int loopcount = 0;

void loop()
{
  Home();
  X();
  A();
  delay(3000);
  A();
  delay(1000);
  A();
  delay(15100);
  A();
  delay(10000);

  A();
  delay(1000000000);
}
