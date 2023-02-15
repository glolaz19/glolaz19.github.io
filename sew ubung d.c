#include <stdio.h>
double quadrat(double laenge){
  double a=4*laenge;

  return a;
  //return laenge*breite;
}


int main(){
double umfang=quadrat(3);
//%d ist für int  %f ist für float und für double
printf("Umfang von Quadrat ist %f", umfang);



return 0;
}

