
#include <stdio.h>
double kreis(double radius){

  double a=radius*radius*3.14;

  return a;
  //return laenge*breite;
}


int main(){
double flache=kreis(3);
//%d ist f�r int  %f ist f�r float und f�r double
printf("Umfang von Quadrat ist %f", flache);



return 0;
}
