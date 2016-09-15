#include "ft_printf.h"

int     opt_d(va_list *ap)
{
    printf("%d",(va_arg(*ap, int)));
    fflush(stdout);
    return (0);
}
