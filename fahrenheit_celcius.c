#include <stdio.h>

/* print fahrenheit to celcius table */

main(){
  int fahr, celcius;
  int lower, upper, step;

  lower = 0;      //lower limit
  upper = 300;    //upper limit
  step = 20;      //step

  fahr = lower;

  while (fahr <= upper){
    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celcius);
    fahr = fahr + step;
  }
}

//so para ver
