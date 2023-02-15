#include<stdio.h>

void fill_number(int array[]){
 for(int i=0;i<10;i++){
     array[i]=i;
      printf("%d",array[i]);
 }
printf("\n");
}

void fill_number2(int array[]){
 for(int i=1;i<=10;i++){
     array[i]=i;
      printf("%d",array[i]);
 }
printf("\n");
}
void fill_number3(int array[]){

 for(int i=0;i<20;i+=2){
     array[i]=i;
      printf("%d",array[i]);
 }
printf("\n");
}

void fill_number4(int array[]){

 for(int i=1;i<20;i+=2){
     array[i]=i;
      printf("%d",array[i]);
 }
printf("\n");
}

int main(){
int arr[10];
fill_number(arr);
fill_number2(arr);
fill_number3(arr);
fill_number4(arr);

return 0;
}
