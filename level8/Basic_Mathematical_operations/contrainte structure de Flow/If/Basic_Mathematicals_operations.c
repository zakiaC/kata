#include<unistd.h>

int basic_op(char op, int value1, int value2) {
  
  int operation;
  
  if(op == '+')
  operation = (value1 + value2);
  else if(op == '-')
    operation = (value1 - value2);
  else if(op == '*')
    operation = (value1 * value2);
  else if(op == '/')
    operation = (value1 / value2);
  
  return (operation);
}
