
#define NET_PROTO_IPV6		/* IPv6 protocol */ /* PCBIOS ENAB */

#define DOWNLOAD_PROTO_HTTPS	/* Secure Hypertext Transfer Protocol */ /* PCBIOS ENAB */
#define HTTP_AUTH_NTLM		/* NTLM authentication */ /* PCBIOS ENAB */

#define HTTP_ENC_PEERDIST	/* PeerDist content encoding */ /* 2PINT */

#define IMAGE_TRUST_CMD	/* Image trust management commands */
#define IPSTAT_CMD		/* IP statistics commands */
#define NEIGHBOUR_CMD		/* Neighbour management commands */
#define NSLOOKUP_CMD		/* DNS resolving command */
#define PING_CMD		/* Ping command */
#define PROFSTAT_CMD		/* Profiling commands */
#define TIME_CMD		/* Time commands */

#if defined ( PLATFORM_pcbios ) /* PCBIOS ENAB */
  #define CERT_CMD		/* Certificate management commands */
  #define CONSOLE_CMD		/* Console command */
  #define DIGEST_CMD		/* Image crypto digest commands */
  #define NTP_CMD			/* NTP commands */
  #define PARAM_CMD		/* Request parameter commands */
  #define PCI_CMD			/* PCI commands */
  #define USB_CMD			/* USB commands */
  #define VLAN_CMD		/* VLAN commands */
  #define VRAM_SETTINGS		/* Add support for VRAM Data */
#endif

#undef EAP_METHOD_MD5		/* MD5-Challenge port authentication */
#define EAP_METHOD_MSCHAPV2	/* MS-CHAPv2 port authentication */
