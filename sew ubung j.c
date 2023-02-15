

#include <stdio.h>


double dreieck(double ha, double a){
    if(ha && a>0){
  double b=ha*a;
  return b;
  //return laenge*breite;
}else{
    printf("ungültiges Wert");
    return 0;
}
}


int main(){

double umfang=dreieck(3,2);
printf("Umfang von Rechteck ist %f", umfang);



return 0;
}
