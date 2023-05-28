#include <stdio.h>

/* print fahrenheit to celcius table */

int main(){
  // int fahr, celcius;
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;      //lower limit
  upper = 300;    //upper limit
  step = 20;      //step

  fahr = lower;

  while (fahr <= upper){
    // celcius = 5 * (fahr - 32) / 9; //int version
    // celcius = 5/9 * (fahr - 32); // this really make all results go to zero bc of the truncation
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t%6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
}
