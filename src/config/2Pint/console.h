#undef LOG_LEVEL
#define LOG_LEVEL LOG_ALL

#if defined ( PLATFORM_SYSLOG )
/* Disable unsecured syslog messages */
//#undef	CONSOLE_SYSLOG		/* Syslog console */
#endif

#if ! defined ( PLATFORM_SYSLOGS )
#define	CONSOLE_SYSLOGS		/* Encrypted syslog console */
#endif

/* when FB mode we don't want DEBUG output anymore, before that DEBUG is shown as well */
#if defined ( CONSOLE_FRAMEBUFFER )
#undef CONSOLE_FRAMEBUFFER
#endif
#define CONSOLE_FRAMEBUFFER ( CONSOLE_USAGE_ALL & ~CONSOLE_USAGE_LOG & ~CONSOLE_USAGE_DEBUG ) /* Graphical framebuffer console */

#undef	KEYBOARD_MAP
#define KEYBOARD_MAP dynamic
