#include <stdio.h>
double area_rectangle(double laenge, double breite){
  double a=laenge*breite;
  return a;
  //return laenge*breite;
}


int main(){
double area1=area_rectangle(3.4,5.1);
//%d ist f�r int  %f ist f�r float und f�r double
printf("Flaecheninhalt von Rechteck ist %f", area1);



return 0;
}



