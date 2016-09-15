#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef int (*fptr)(va_list *ap);
int	ft_printf(const char *format, ...);
int opt_d(va_list*);

#endif
