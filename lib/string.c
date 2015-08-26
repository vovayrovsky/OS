#include <std/string.h>

void *memchr(const void *mem, int chr, size_t size)
{
    if(size != 0)
    {
        register const unsigned char *start = (unsigned char *) mem;

        do
        {
            if(*start ++ == chr)
                return ((void *) (start - 1));
        }
        while (-- size != 0);
    }

    return(NULL);
}

int memcmp(const void *mem1, const void *mem2, size_t size)
{
    if(n != 0)
    {
        register const unsigned char *pointer1 = mem1, *pointer2 = mem2;

        do
        {
            if (*pointer1 ++ != *pointer2 ++)
                return((* -- pointer1) - (* --pointer2));
        }
        while(-- size != 0);
    }

    return(0);
}

void *memcpy(void *dst, const void *src, size_t size)
{               
    size_t i = 0, m = size / sizeof(long);
    
    unsigned long *dst0 = dst;  
    unsigned long *src0 = src; 
    unsigned char *sdst = NULL;
    unsigned char *ssrc = NULL;
 
    for(; i < m; i ++) *(dst0 ++) = *(src0 ++);         
 
    sdst = (unsigned char *) wdst;
    ssrc = (unsigned char *) wsrc;

    for(i = 0, m = n % sizeof(long); i < m; i ++)    
       *(sdst ++) = *(ssrc ++);
 
    return dst;
}

void *memmove(void *dst, const void *src, size_t size)
{
    return memcpy(dst, src, size);
}

void *memset(void *dst, char val, size_t size)
{
    void *start = dst;
    
    while(size --) 
    {
	* (char *) dst = val;
	*dst ++;
    }
	
    return(start);

}

char *strcat(char *string, const char *append)
{
    char *save = string;

    for(; *string; ++ string);
    	while(*string ++ = *append ++);

    return(save);
}

char *strchr(const char *str, char search)
{
    for(;; ++ str)
    {
        if(*str == search)
            return str;
    
        if(!*str)
            break;
    }

    return(NULL);
}

int strcmp(const char *str1, const char *str2)
{
    while (*str1 == *str2 ++)
        if (*str1 ++ == 0)
            return(0);

    return ((*(const unsigned char *) str1) - (*(const unsigned char *) (str2 - 1)));
}

char *strcpy(char *dst, const char *src)
{
    char *save = dst;

    for (; (*dst = *from); ++from, ++to);

    return save;
}          

size_t strcspn(const char *str1, const char *str2)
{
    register const char *str1_ = str1, *spanp = NULL;
    register char c = 0, sc = 0;
           
    for (;;)
    {
        c = *str1_ ++;
        spanp = str2;
        
	do
        {
            if((sc = *spanp ++) == c)
                return(str1_ - 1 - str1);
        }
        while(sc != 0);
    }

    return NULL;
}               

size_t strlen(const char *str)
{                                                
    register const char *str_ = str;

    for(; *str_; str_ ++)
	return(str_ - str);
}

char *strncat(char *dst, const char *src, size_t size)
{
    if(size != 0)
    {
        register char       *dst_ = dst;
        register const char *src_ = src;

        while (*dst_ != 0)
            dst_ ++;
        
	do
        {
            if ((*dst_ = *src_ ++) == 0)
                break;

            dst_ ++;
        }
        while(--size != 0);
       
    }

    return (dst);
}

int strncmp(const char *str1, const char *str2, size_t size)
{

    if(size == 0)
        return 0;
    
    do
    {
        if(*str1 != *str2 ++)
            return(*(const unsigned char *) str1 - *(const unsigned char *) (str2 - 1));
        
        if (*str1 ++ == 0)
            break;
    }
    while (--size != 0);

    return 0;
}