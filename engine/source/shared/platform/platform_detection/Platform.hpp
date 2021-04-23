#ifndef ARARE_PLATFORM_HPP
#define ARARE_PLATFORM_HPP

// Windows 32bit
#if defined(WIN32) || defined(_WIN32)
#define ARARE_PLATFORM_WIN32

#else
#error "Sorry, this platform is not supported."
#endif

#endif
