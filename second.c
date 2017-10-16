#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  float x = -0.1;
  float x1 = 1.0;
  float dx = 0.25;
  float a = 1.5;
  float y;

  for( ; x <= x1; x += dx) {
    if(a * x < 1.0) {
      y = a * x - log(a * x);
    }
    else if(a * x == 1.0) {
      y = 1.0;
    }
    else if(a * x > 1.0) {
      y = a * x + log(a * x);
    }
    printf("%f\t %f\n", x, y);
  }
}
