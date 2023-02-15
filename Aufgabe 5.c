#include <stdio.h>
int main(){
for(int i=1;i<4;i++){


printf("%d. Durchlauf aussen\n",i);
for(int j=1;j<4;j++){
   printf("%d. Durchlauf innen\n",j);
}

printf("\n");

}

return 0;
}
