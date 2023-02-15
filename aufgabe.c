
#include <stdio.h>
int main(){
int a;
int counter=0;
printf("Gib eine Zahl ein");
scanf("%d",&a);
int b=a;
while(a>0){
    a=a/10;
    counter++;

}
printf("Die Zahl hat %d Stellen",counter);

while(b>0){
    printf("%d\n",b%10);
    b/=10;
}
return 0;
}
