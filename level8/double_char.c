#include<unistd.h>

char *double_char (const char *string, char *doubled)
{
  *doubled = '\0'; // write to doubled
  
  int  i = 0;
  int j  = 0;
  
  while(string[i] != '\0'){
    
    doubled[j] = string[i];
    j++;
    doubled[j] = string[i];
    j++;
     i++;

  }
  
  doubled[j] = '\0';
  
  return doubled; 
  
}
