#include <stdio.h>
double quadrat(double laenge, double breite){
  double a=laenge*breite;
  return a;
  //return laenge*breite;
}


int main(){
double area=quadrat(3,3);
//%d ist für int  %f ist für float und für double
printf("Umfang von Rechteck ist %f", area);



return 0;
}

