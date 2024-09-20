#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    char c = 'A';
    char *str = "Hola Mundo";
    void *ptr = &c;
    int d = 42;
    int i = -42;
    unsigned int u = 4294967295;
    unsigned int hex_lower = 3735928559;
    unsigned int hex_upper = 3735928559;
    
    // Conversiones de caracteres
    printf("%c\n", c);
    ft_printf("%c\n", c);

    // Conversiones de string
    printf("%s\n", str);
    ft_printf("%s\n", str);

    // Conversión de puntero
    printf("%p\n", ptr);
    ft_printf("%p\n", ptr);

    // Conversiones de enteros con signo
    printf("%d\n", d);
    ft_printf("%d\n", d);

    printf("%i\n", i);
    ft_printf("%i\n", i);

    // Conversión de enteros sin signo
    printf("%u\n", u);
    ft_printf("%u\n", u);

    // Conversión de hexadecimal en minúsculas
    printf("%x\n", hex_lower);
    ft_printf("%x\n", hex_lower);

    // Conversión de hexadecimal en mayúsculas
    printf("%X\n", hex_upper);
    ft_printf("%X\n", hex_upper);

    // Literal %
    printf("%%\n");
    ft_printf("%%\n");

    return 0;
}

