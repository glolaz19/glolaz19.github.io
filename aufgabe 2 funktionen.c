#include <stdio.h>
void kuerze(int zaeler, int nenner){
if(nenner==0 || zaeler==0){
    printf("Nenner darf nicht 0 sein");
    return 0;
}
int min;
if(zaeler<=nenner)min=zaeler;
else min=nenner;

for(int i=2;i<=min;i++){
   //Fragen ob zaeler und nenner durch i teilbar.
    if(zaeler%i==0 && nenner%i==0){
        zaeler/=i;//zaeler=zaeler/i
        nenner/=i;
       //nochenmal fragen ob durch dieselbe Zahl teilbar
        i--;
    }
}
printf("Der gekuerzte Bruch ist %d / %d\n", zaeler,nenner);
}
int main(){
kuerze(4,8);
kuerze(9,18);
kuerze(6,9);
kuerze(8,0);
return 0;
}
