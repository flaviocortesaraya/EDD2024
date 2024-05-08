#include<stdio.h>

int factorial(int);

void main(){
    int n;
    printf("ingresar el numero ");
    scanf("%D",&n);
    printf("El factorial del numero %d es : %d ",n,factorial(n));
}

int factorial(int n){
  if(n==0||n==1){return 1;}
}else{return n*factorial(n-1)}
