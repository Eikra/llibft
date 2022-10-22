
char    *ft_strtrim(char const *s1, char const *set)
{
    char *strtrim;
    size_t  strt;
    size_t  end;
    size_t  i;
    size_t  s_len;
    size_t len;
    size_t  n_len;

    i = 0;
    strt = 0;
    if (!s1 || !set)
		return (NULL);
    s_len = ft_strlen(set);
    while (s1[i] == set[i] && i < s_len)
    {
         if (s1[i] == set[i])
        {
            while(s1[i] == set[i] && i < s_len)
            {
                i++;
            }
            if (i == s_len)
                strt = i;
        }
    }
    len  = ft_strlen(s1);
    end = len;
    while (s1[len - 1] == set[s_len - 1] && s_len > 0)
    {
         if (s1[len - 1] == set[s_len - 1])
        {
            while(s1[len - 1] == set[s_len - 1])
            {
                len--;
                s_len--;
            }
            if (s_len == 0)
                end = len;
        }
        i++;
    }
    i = 0;
    n_len = end - strt;
    strtrim = (char*)malloc((n_len + 1));
    while (s1[strt] && n_len-- > 0)
    {
        strtrim[i] = s1[strt];
        i++;
        strt++;
    }
    strtrim[i] = '\0';
    return (strtrim);
}
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
int is_in_set(char const *set, int c)
{
    int i;
    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return(1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    char *strtrim;
    size_t  strt;
    size_t  end;
    size_t  i;
    size_t  n_len;

    i = 0;
    end = ft_strlen(s1)-1;
    if (!s1 || !set)
        return (NULL);
    while (s1[i] && is_in_set(set, s1[i]) && i <= end)
    {
        i++;
    }
    strt = i;
    
    while (s1[end] && is_in_set(set, s1[end]) && end >= 0)
    {
            end--;
    }
    if (strt == end)
        n_len = 2;
    else 
        n_len = end - strt + 2;
    ft_strlcpy(strtrim, s1 + strt, n_len);
    return (strtrim);
}
int main() {
  char * s = ft_strtrim("   xxx   xxx", " x");
  printf("%d", strcmp(s, ""));
  return 0;
}
char    *ft_strtrim(char const *s1, char const *set)
{
    char *strtrim;
    size_t  strt;
    size_t  end;
    size_t  i;
    size_t  n_len;

    i = 0;
    end = ft_strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (s1[i] && is_in_set(set, s1[i]) && i < end)
    {
        i++;
    }
    strt = i;
    while (s1[end - 1] && is_in_set(set, s1[end -1]) && end > 0)
    {
            end--;
    }
    if (strt == end -1)
        n_len = 2;
    else 
        n_len = end - strt + 1;
    strtrim = (char*)malloc(n_len);
    ft_strlcpy(strtrim, s1 + strt, n_len);
    return (strtrim);
}