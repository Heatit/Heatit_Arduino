#include <Heatit.h>

void setup() {
  Heatit.setup();
}

void loop() {
  Heatit.pins[0].setCurrent(0);
  delay(1000);
  Heatit.pins[0].setCurrent(100);
  delay(1000);
  Heatit.pins[0].setCurrent(200);
  delay(1000);
  Heatit.pins[0].setCurrent(300);
  delay(1000);
  Heatit.pins[0].setCurrent(400);
  delay(1000);

}
