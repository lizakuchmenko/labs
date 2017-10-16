#include <stdio.h>
#include <math.h>

int main() {
  float a = 15.123;
  float b = 9.563;
  float z = 0.717;
  float x = powf(b + cbrtf(a) - 1, 1.0/4);
  float y = fabsf(a - b) * (powf(sin(z), 2) + tanf(z));
  printf("%f, %f\n", x, y);
  return 0;
}
