
#include <stdio.h>
double kreis(double radius){

  double a=radius*radius*3.14;

  return a;
  //return laenge*breite;
}


int main(){
double flache=kreis(3);
//%d ist für int  %f ist für float und für double
printf("Umfang von Quadrat ist %f", flache);



return 0;
}
