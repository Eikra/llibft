#include "libft.h"
int count(int  num)
{
    int i;

    i = 0;
    if (num < 0)
        i++;
    while (num)
    {
        num /= 10;
        i++;
    }
    return (i);
}
char    *ft_itoa(int n)
{
    char    *num;
    int     i;
    int     len;

    
    if(n == 0)
    {
        num = malloc(2 * sizeof(char));
        if(!num)
            return(0);
        num = "0";
        return(num);
    }
    len = count(n);
    num = malloc((len+1)*sizeof(char));
    if (!num)
      return(0);
    if(n<0)
    {
      num[0] = '-';
      n *= -1;
    }
    num[len] = '\0';
    while(n)
    {
        num[--len] = n % 10 + 48;
        n /= 10;
    }
    return(num);
}