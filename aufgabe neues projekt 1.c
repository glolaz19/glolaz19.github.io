#include <stdio.h>
double increase(double zahl){
 zahl+=3.14; //zahl=zahl+3.14;
}
int main(){
double a;
printf("Gib eine Zahl ein:");
scanf("%d",&a);
a=increase(a);
printf("Das neue a ist %i",a);

return 0;
}








