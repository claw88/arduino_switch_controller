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

  // 巣前
  for (int i = 0; i < 3; i++)
  {
    if (i == 0)
    {
      A();
      delay(500);
    }
    else
    {
      A();
      delay(200);
      A();
      delay(200);
      A();
      delay(500);
    }
    A();
    delay(2500);

    Home();
    SwitchControlLibrary().MoveHat(4);
    delay(50);
    SwitchControlLibrary().MoveHat(2);
    delay(500);
    SwitchControlLibrary().MoveHat(8);
    A();
    delay(1000);

    SwitchControlLibrary().MoveHat(4);
    delay(1700);
    SwitchControlLibrary().MoveHat(2);
    delay(50);
    SwitchControlLibrary().MoveHat(4);
    delay(480);
    SwitchControlLibrary().MoveHat(8);
    A();

    //日付と時刻
    SwitchControlLibrary().MoveHat(4);
    delay(400);
    SwitchControlLibrary().MoveHat(8);
    A();

    //現在の日付と時刻
    SwitchControlLibrary().MoveHat(2);
    delay(350);
    SwitchControlLibrary().MoveHat(0);
    delay(40);
    SwitchControlLibrary().MoveHat(2);
    delay(410);
    SwitchControlLibrary().MoveHat(8);
    A();

    Home();
    Home();
    B();
    delay(500);
    A();
    delay(4000);
  }

  A();
  delay(200);
  A();
  delay(200);
  A();

  delay(1000000000);
}
