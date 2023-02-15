#include <stdio.h>
double rectangle(double laenge, double breite){
  double a=laenge+breite;
  double b=a*2;
  return b;
  //return laenge*breite;
}


int main(){
double umfang=rectangle(3,1.5);
//%d ist für int  %f ist für float und für double
printf("Umfang von Rechteck ist %f", umfang);



return 0;
}
