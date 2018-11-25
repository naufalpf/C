#include "stdio.h"
#include "iostream"
#include "stdlib.h"
#include "conio.h"

int main(){
int nilai,a,i,j,k;
printf("Masukkan nilai: ");
scanf("%i", &nilai);
for (i=0; i<=nilai; i++){
    for (k=0; k<=((2*nilai)-(2*i)); k++){
        printf(" ");
        }
        for (j=0; j<=i; j++){
            if (j==0||i==j){
               a=1;
               }
            else{
                 a=a*(i+1-j)/j;
                 }
            printf("%5i", a);
            }
        printf("\n");
        }
getch();
}
