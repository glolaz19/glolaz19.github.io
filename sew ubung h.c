
#include <stdio.h>
double dreieck(double laenge1, double laenge2, double laenge3){
  double a=laenge1+laenge2+laenge3;
  return a;
  //return laenge*breite;
}


int main(){
double umfang=dreieck(3,4,6);
//%d ist f�r int  %f ist f�r float und f�r double
printf("Umfang von dreieck ist %f", umfang);



return 0;
}
