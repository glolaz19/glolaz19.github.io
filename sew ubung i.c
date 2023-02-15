#include <stdio.h>
  double area_trapez(double basis, double Basis, double hoehe){
  double a=basis+Basis;
  double b=a*hoehe;
  double c=b/2;
  return c;
}


int main(){
double area1=area_trapez(3,5,4);
//%d ist für int  %f ist für float und für double
printf("Flaecheninhalt von Trapez ist %f", area1);



return 0;
}

