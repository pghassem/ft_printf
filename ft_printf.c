#include "ft_printf.h"

static const fptr	g_fTab[26] ={
    NULL,
    NULL,
    NULL,
    opt_d,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL};

void     parse_args(const char **format, va_list *ap)
{
    unsigned char c;

    c = (unsigned char)*(*format + 1) - 'a';
    g_fTab[c](ap);
    *format += 2;
}

int     ft_printf(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    while (*format)
       *format != '%'? putchar(*(format++)) : parse_args(&format, &ap);
    va_end(ap);
    return (0);
}

/*int main(int ac, char **av)
{
    int age = 10;
    ft_printf("%d", age);
    return (0);
}*/