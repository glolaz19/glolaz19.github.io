#include <stdio.h>


int main(){
    int number1;
    int number2;
    printf("Gib eine Zahl ein: ");
    scanf(" %d",&number1);
    printf("Gib eine zweite Zahl ein: ");
    scanf(" %d",&number2);

   int result=auswahl(number1,number2);
   printf("Das Ergebnis ist:%d",result);
   return 0;
}

int auswahl(int a,int b){
    char operation;
    printf("Was moechtest du rechnen? Fuer Addieren waehle a, fuer Subtrahieren waehle s, fuer multiplizieren waele m: ");
    scanf(" %c",&operation);
    if(operation=='a'){
            //return gives result back to main.
       return addieren(a,b);
    }
    else if(operation=='s'){
       return subtrahieren(a,b);
    }
    else if(operation=='m'){
       return multiplizieren(a,b);
    }
    else if (operation=='p'){
        return potenz(a,b);
    }
    else printf("Falsche Eingabe");
}

int addieren(int num1, int num2){
return num1+num2;
}
int subtrahieren(int num1, int num2){
return num1-num2;
}
int multiplizieren(int num1, int num2){
return num1*num2;
}

int potenz(int num1, int num2){
int result=1;
for(int i=0;i<num2;i++)result*=num1;
return result;
}






