#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t count_word(char const *s, int c)
{
	  size_t i;
	  size_t count;
	  int done_null;
	  
	  count = 0;
	  i = 0;
	  done_null= 1;
	  while(i< strlen(s))
	  {
	    if(s[i]!= c && s[i] && done_null >0)
	    {
	      count++;
	      done_null = -1;
	    }
	    if ((s[i] == c || !s[i]) && done_null < 0)
	    {
	      done_null = 1;
	    }
	    i++;
	  }
	  return(count);
}
char  *word_split(char const *s, int start, int end)
{
  int i;
  
  char  *word;
  
  i = 0;
  word = malloc(sizeof(char)*(end-start+2));
  if(!word)
    return(NULL);
  while(start <= end)
  {
    word[i] = s[start];
    i++;
    start++;
  }
  word[i] = '\0';
  return (word);
}
char   **ft_split(char const *s, char c)
{
  char    **tab;
  size_t  i;
  size_t  j;
  size_t  start;

  tab = (char**)malloc(sizeof(char**) * count_word(s, c));
  if(!tab)
    return(NULL);
  j = 0;
  i = 0;
  while(i < ft_strlen(s))
  {
  start = i;
  while(s[i]!= c)
  {
    if(s[i+1] == c || s[i+1]== '\0')
    {
      tab[j]= word_split(s, start, i);
      j++;
    }
    i++;
  }
  i++;
  }
  return(tab);
}
/*size_t count_word(char const *s, int c)
{
  size_t i;
  size_t count;
  int done_null;
  
  count = 0;
  i = 0;
  done_null= 1;
  while(i< strlen(s))
  {
    if(s[i]!= c && s[i] && done_null >0)
    {
      count++;
      done_null = -1;
    }
    if ((s[i] == c || !s[i]) && done_null < 0)
    {
      done_null = 1;
    }
    i++;
  }
  return(count);
}
char  *word_split(char const *s, int start, int end)
{
  int i;
  
  char  *word;
  
  i = 0;
  word = malloc(sizeof(char)*(end-start+2));
  if(!word)
    return(NULL);
  while(start <= end)
  {
    word[i] = s[start];
    i++;
    start++;
  }
  word[i] = '\0';
  return (word);
}
char   **ft_split(char const *s, char c)
{
  char    **tab;
  size_t  i;
  size_t  j;
  size_t  start;
  int set_index;
  
  
  tab = malloc(sizeof(char**)*(count_word(s, c)+1));
  if(!tab)
    return(NULL);
  j = 0;
  i = 0;
  while(i < strlen(s))
  {
    set_index = 1;
    start = i;
    while(s[i] != c && s[i])
    {
      if (s[i] != c && (s[i+1] == c || s[i+1] == '\0'))
      {
      tab[j]= word_split(s, start, i);
      set_index = -1;
      j++;
      }
    i++;
    }
    if (set_index < 0)
      i--;
  i++;
  }
  return(tab);
}*/