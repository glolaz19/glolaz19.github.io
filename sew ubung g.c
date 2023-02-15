
#include <stdio.h>
double dreieck(double h, double a){
  double b=h*a;
  b=b/2;
  return b;
  //return laenge*breite;
}


int main(){
double umfang=dreieck(3,2);
//%d ist für int  %f ist für float und für double
printf("Umfang von Rechteck ist %f", umfang);



return 0;
}
