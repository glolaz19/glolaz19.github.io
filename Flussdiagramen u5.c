#include <stdio.h>
int main(){
 int y=2;
 printf("%i\n",y);
 while(y>-4){

    if(y%2==0){
        y=y-1;
         printf("%i\n",y);
    }else{
    y-=3;
     printf("%i\n",y);
    }


 }
y+=9;
 printf("%i\n",y);








return 0;
}

