#include <stdio.h>
int increase(int zahl){
zahl++;
return zahl;
//return ++zahl; wäre auch rechtig
//return zahl++; wäre falsch
}



int main(){
int a;
printf("Gib eine Zahl ein:");
scanf("%d",&a);
a=increase(a);
printf("Das neue a ist %i",a);

return 0;
}
