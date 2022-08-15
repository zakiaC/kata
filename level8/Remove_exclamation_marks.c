#include<unistd.h>

void remove_exclamation_marks(const char *str_in, char *str_out)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  
  while('\0' != str_in[i])
  {
    if('!' != str_in[i])
    {
      str_out[j] = str_in[i];
      ++str_out;
    }
    
    str_in++;
  }
}
