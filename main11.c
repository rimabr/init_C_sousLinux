#include "fonctions.h"
#include<stdio.h>
int main () {
int a ;
int b ;
printf ("\n saisie du premier nombre:");
scanf("%d",&a);
do{
printf("\nsaisie du second nombre:");
scanf("%d",&b);
}while(b==0);
printf("\n%d+%d=%d",a,b,sommer(a,b));
printf("\n%d-%d=%d",a,b,soustraire(a,b));
printf("\n%d/%d=%f\n",a,b,(float)deviser(a,b));
return(0);
}


