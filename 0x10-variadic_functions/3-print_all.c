#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	const char *format_ptr = format;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == 'c')
		{
			char c = va_arg(args, int);

			printf("%c, ", c);
		}
		else if (*format == 'i')
		{
			int i = va_arg(args, int);

			printf("%d, ", i);
		}
		else if (*format == 'f')
		{
			double f = va_arg(args, double);

			printf("%.6f, ", f);
		}
		else if (*format == 's')
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil), ");
			}
			else
			{
				printf("%s, ", s);
			}
		}
		format_ptr++;
	}
	printf("\n");

	va_end(args);
}
