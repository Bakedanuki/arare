#ifndef ARARE_BYTEORDER_HPP
#define ARARE_BYTEORDER_HPP

// x86
#if defined(_M_IX86) || defined(__i386__)
#define ARARE_BYTE_ORDER_LITTLE_ENDIAN

// IA64
#elif defined(_M_IA64) || defined(__ia64__)
#define ARARE_BYTE_ORDER_BIG_ENDIAN

// AMD64
#elif defined(_M_AMD64) || defined(__amd64__)
#define ARARE_BYTE_ORDER_LITTLE_ENDIAN

#else
#error "Sorry, no know byte order."
#endif

#endif
