#ifndef _vasprintf_h_
#define _vasprintf_h_

#include <stdarg.h>

#ifdef __cplusplus
extern "C"
{
#endif

#if defined(HAVE__VSNPRINTF) && !defined(HAVE_VSNPRINTF)
#undef vsnprintf
#define vsnprintf _vsnprintf
#elif !HAVE_VSNPRINTF
int vsnprintf(char *ret, size_t max, const char *fmt, va_list ap);
#endif /* !HAVE_VSNPRINTF */

#if !HAVE_ASPRINTF
int asprintf(char **ret, const char *fmt, ...);
#endif /* !HAVE_ASPRINTF */

#if !HAVE_VASPRINTF
int vasprintf(char **ret, const char *fmt, va_list ap);
#endif /* !HAVE_VASPRINTF */

#ifdef __cplusplus
}
#endif

#endif
