#include <stdio.h>
int decrease(int x){
x=x/2;
return x;
}
int increase(int y){
y=y*2;
return y;
}

int main(){
    int x;
printf("Gib x ein: ");
scanf("%d",&x);
x=decrease(x);
printf("Das neue x ist %i\n",x);
int y;
printf("Gib y ein: ");
scanf("%d",&y);
y=increase(y);
printf("Das neue y ist %i",y);
    return 0;
}
