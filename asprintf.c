/*
 * asprintf(3)
 * 20020809 entropy@tappedin.com
 * public domain.  no warranty.  use at your own risk.  have a nice day.
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "vasprintf.h"


int
asprintf(char **ret, const char *fmt, ...)
{
	int len;
	va_list ap;

	va_start(ap, fmt);
	len = vasprintf(ret, fmt, ap);
	va_end(ap);
	return len;
}
