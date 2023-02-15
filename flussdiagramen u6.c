#include <stdio.h>
int main (){
 int z=1;
 printf("%i\n",z);
 while(z%2==1){
    if(z>4){
        z++;
        printf("%i\n",z);
    }else{
    z+=2;
    printf("%i\n",z);
    }
 }



return 0;
}

