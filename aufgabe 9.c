#include <stdio.h>
int main(){
//Schleife au�en=Zeilen
//Schleife innen=Sterne
for(int i=1;i<6;i++){
   for(int j=1;j<=i;j++){
    printf("*");
    }  printf("\n");
}
  for(int i=8;i>4;i--){
   for(int j=5; j<=i;j++){

    printf("*");
    }
 printf("\n");
}

return 0;
}
