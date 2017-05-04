#include <stdio.h>

int main()
{
//  También se puede decir:
//  int n1,n2;

    int n1;
    int n2;

    printf("Ingresa primer numero: ");
    scanf("%i",&n1);
    printf("Has escrito: %i\n",n1);

    printf("Ingresa segundo numero: ");
    scanf("%i",&n2);
    printf("Has escrito: %i\n",n2);

    if(n1==n2)
    {
        printf("El numero %i es igual al numero %i\n",n1,n2);
    }
    else if(n1<n2)
    {
        printf("El numero %i es mayor que el numero %i\n",n2,n1);
    }
    else
    {
        printf("El numero %i es mayor que el numero %i\n",n1,n2);        
    }

}
