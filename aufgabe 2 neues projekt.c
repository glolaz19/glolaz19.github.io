#include <stdio.h>
int increase(int zahl){
zahl++;
return zahl;
//return ++zahl; w�re auch rechtig
//return zahl++; w�re falsch
}



int main(){
int a;
printf("Gib eine Zahl ein:");
scanf("%d",&a);
a=increase(a);
printf("Das neue a ist %i",a);

return 0;
}
