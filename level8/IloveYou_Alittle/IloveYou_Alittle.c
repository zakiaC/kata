#include <unistd.h>
 
//1ere proposition creer et initialiser un tableau puis creer la fonction 

char  *phrase[6] =
{
"I love you"
"a little"
"a lot"
"passionately"
"madly"
"not at all" 
};

char *how_much_i_love_you(int nb_petals)
{
int	remainder;

	remainder = (nb_petals -1 % 6);		
  	return(phrase[remainder]);
}

// seconde proposition inclure le tableau dans le corp de la fonction

const char* how_much_i_love_you(int nb_petals)
{
 char *phrases[6]={ "I love you", 
              "a little", "a lot",
              "passionately",  
              "madly", 
              "not at all"};
  return phrases[(nb_petals-1) % 6];
}

//WIP

#include <stddef.h> // NULL
#include <unistd.h>


  char remainder( int nb_petals, int modulo)
{
    nb_petals = nb_petals -1;
    modulo = len[phrases]; // to do : define len 
    return(nb_petals /modulo);
    
  }

const char* how_much_i_love_you(char remainder)
{
 char *phrases[6]={ "I love you", 
              "a little", "a lot",
              "passionately",  
              "madly", 
              "not at all"};
  return phrases[remainder];
}
