
#include <stdio.h>
double dreieck(double h, double a){
  double b=h*a;
  b=b/2;
  return b;
  //return laenge*breite;
}


int main(){
double umfang=dreieck(3,2);
//%d ist f�r int  %f ist f�r float und f�r double
printf("Umfang von Rechteck ist %f", umfang);



return 0;
}
