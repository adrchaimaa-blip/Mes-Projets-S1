#include <stdio.h>
int main(){
    float a,b,c;
     printf("Donner une valeur de a:");
    scanf("%f",&a);
    printf("Donner une valeur de b:");
    scanf("%f",&b);
    printf ("Donner une valeur de c:");
    scanf("%f",&c);
     //Vérification du maximum et du minimum
     if(a>b && a>c){
        printf("la valeur de a est le max\n");}
    else if(b>a && b>c){
        printf("la valeur de b est le max\n");}
    else if(c>a && c>b){
        printf("la valeur de c est le max\n");}
    else if(c<a && c<b){
        printf("la valeur de b est le min\n");}
    else if(a<b && a<c){
        printf("la valeur de a est le min\n");}
    else if(b<a && b<c){
        printf("la valeur de b est le min\n");}
    else {
        printf("la valeur a,b,et c sont egaux\n");}
        return 0;
}
