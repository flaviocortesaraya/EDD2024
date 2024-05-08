#include<stdio.h>

int factorial(int);

void main(){
    int n;
    printf("ingresar el numero ");
    scanf("%D",&n);
    printf("El factorial del numero %d es : %d ",n,factorial(n));
}

int factorial(int n){
    int calculo
    if(n<0){
        return 0;
    }
    if(n==0||n==1){
        return 1;
    }else{
        calculo =n*factorial(n-1);
        if(calculo<=0){
            return 0;
        }
        return calculo;
    }

}
