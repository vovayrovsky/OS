#ifndef STD_STRING_H
#define STD_STRING_H

#ifndef NULL

	#define NULL ((void *) 0)

#endif // NULL

#ifdef __x86_64__

	typedef unsigned long long size_t;

#else 

	typedef unsigned long size_t;

#endif // __x86_64__

extern void *memcpy(void *, const void *, size_t);
extern void *memmove(void *, const void *, size_t);
extern char *strcpy(char *, const char *);
extern char *strncpy(char *, const char *, size_t) ;

extern char *strcat(char *, const char *);
extern char *strncat(char *, const char *, size_t);

extern int memcmp(const void *, const void *, size_t);
extern int strcmp(const char *, const char *);
extern int strncmp(const char *, const char *, size_t);

extern void *memchr(const void *, int, size_t);
extern char *strchr(const char *, int);
extern size_t strcspn(const char *, const char *);
extern char* strpbrk(const char *, const char *);
extern char *strrchr(const char *, int);
extern size_t strspn(const char *, const char *);
extern char *strstr(const char *, const char *);
extern char * strtok(char *, const char *);

extern void *memset(void *, int, size_t);
extern size_t strlen(const char *);       

#endif // STD_STRING_H