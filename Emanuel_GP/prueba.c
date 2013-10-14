#include <stdio.h>
    
    int main(void)
    {
        
        int a, b, c, r;
        
        printf("\nPrograma de Prueba.\n");
        
        printf ("Dame un valor entero: "); scanf ("%d", &a);
        printf ("Dame otro valor entero: "); scanf ("%d", &b);
        printf ("Y uno mas: "); scanf ("%d", &c);
        
        r = (a < b) ? ( (a < c) ? a : c ) : ( (b < c) ? b : c );
        printf ("Resultado: %d\n", r);
        
        return 0;
    }
