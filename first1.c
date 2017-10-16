#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  float c = 0.7;
  float m = 0.3 * powf(10.0, -2.0);
  float a = 5.0;
  float n = 1.2;
  float x = 5 / sqrt(1 + c * exp(-m));
  float y = a * (
    1 - (
      cos(c) / sqrt(
        powf(n , 2) - powf(sin(c), 2)
      )
    )
  );
  printf("%f %f\n", x, y);
  return 0;
}
