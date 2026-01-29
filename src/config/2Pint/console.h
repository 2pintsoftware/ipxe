#if defined ( PLATFORM_pcbios )
#define	CONSOLE_SYSLOGS		/* Encrypted syslog console */
#define	CONSOLE_FRAMEBUFFER	/* Graphical framebuffer console */
#endif
//#undef CONSOLE_SYSLOG ?
#undef	KEYBOARD_MAP
#define KEYBOARD_MAP dynamic
