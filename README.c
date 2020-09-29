//Faça um programa que leia um número e retorne o fatorial deste número.


#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char** argv)
{
	
 int n, fatorial, i;
 
 printf("Digite o numero: ");
 scanf("%d", &n);
 
 fatorial = 1;
 for(i = n; i > 0; i--)
{
    fatorial *= i;
}
 
 printf("Fatorial de %d: %d\n", n, fatorial);
 
 system("pause");
 return 0;
}
