#include <stdio.h>
int main(){
int n;
printf("Gib ein Zahl ein:");
scanf("%d",&n);
int teiler=0;

for(int i=2;i<=n;i++){
        teiler=0;
    for(int j=1;j<i;j++){
        if(i%j==0) teiler+=j;
    }
    if(teiler==i)printf("%d ",i);
}








return 0;}

