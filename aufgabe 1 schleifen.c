#include <stdio.h>
int main(){
int n;
printf("Gib ein Zahl ein:");
scanf("%d",&n);

for(int i=2;i<10000;i++){
    if(n%i==0){
    printf("%d ",i);
    n/=i;
    i=1;
    }
}








return 0;}
