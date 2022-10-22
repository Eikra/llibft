#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t    ft_strlen(const char *s)
{
    size_t    len;

    len = 0;
    if (!s)
        return (0);
    while (s[len])
        len++;
    return (len);
}    
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  d;

    d = ft_strlen(src);
    i = 0;
    if (dstsize == 0)
        return (d);
    while (src[i] && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
        dst[i] = '\0';
    return (d);
}
static unsigned int    is_in_set(char c, char const *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char                *ft_strtrim(char const *s1, char const *set)
{
    int                i;
    unsigned int    outstr_size;
    char            *outstr_start;
    char            *outstr_end;
    char            *outstr;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    while (s1[i] && is_in_set(s1[i], set))
        i++;
    outstr_start = (char *)&s1[i];
    if ((i = ft_strlen(s1) - 1) != -1)
        while (i >= 0 && is_in_set(s1[i], set))
            i--;
    outstr_end = (char *)&s1[i];
    if (!*s1 || outstr_end == outstr_start)
        outstr_size = 2;
    else
        outstr_size = outstr_end - outstr_start + 2;
    if (!(outstr = malloc(sizeof(char) * outstr_size)))
        return (NULL);
    ft_strlcpy(outstr, outstr_start, outstr_size);
    return (outstr);
}
int main() {
  char * s = ft_strtrim("   xxx   xxx", " x");
  char * s1 = strtrim("   xxx   xxx", " x");
  printf("%d", strcmp(s1, ""));
  printf("%d", strcmp(s, ""));
  
  return 0;
}