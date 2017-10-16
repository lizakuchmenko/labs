#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  float y;
  float a = 1.8;
  float x = -2.0;
  float x1 = 2.0;
  float dx = 0.5;

  for( ; x <= x1; x += dx) {
    if(x >= 1) {
      y = log(x);
    }
    else if(x >= -1.0 && x <= 1.0) {
      y = sqrt(x * x + pow(a, 3.0));
    }
    else if(x <=- 1.0) {
      y = exp(x);
    }
  printf("%f\t %f\n", x, y);
  }
}
