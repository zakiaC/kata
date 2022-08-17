#include<unistd.h>

void remove_exclamation_marks(const char *str_in, char *str_out)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  
  while(str_in[i] != '\0')
  {
    if(str_in[i] != '!')
    {
      str_out[j] = str_in[i];
      str_out++;
    }
    
    str_in++;
  }
str_out[i] = '\0';
}
