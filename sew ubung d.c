#include <stdio.h>
double quadrat(double laenge){
  double a=4*laenge;

  return a;
  //return laenge*breite;
}


int main(){
double umfang=quadrat(3);
//%d ist f�r int  %f ist f�r float und f�r double
printf("Umfang von Quadrat ist %f", umfang);



return 0;
}

