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

int TIMES = 0;
int LOOPCOUNT = 0;
void setup()
{
  SwitchControlLibrary();
  delay(2000);
  L();
  R();
  L();
  R();

  int target = 9201 - 3;
  int month = target / 30;
  int day = target % 30;
  TIMES = month * 31 + day;

  A();
}
void loop()
{
  if (LOOPCOUNT >= TIMES)
  {
    SwitchControlLibrary().MoveHat(8);
    delay(1000000000);
  }
  else
  {
    SwitchControlLibrary().MoveHat(6);
    delay(410);
    SwitchControlLibrary().MoveHat(0);
    delay(40);
    SwitchControlLibrary().MoveHat(2);
    delay(410);

    A();
    A();
    LOOPCOUNT++;
  }
}
