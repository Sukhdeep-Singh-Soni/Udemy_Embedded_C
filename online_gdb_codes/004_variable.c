#include <stdio.h>

int main()
{
  unsigned char distA2B; //variable definition
  distA2B = 160;        //variable initialization
  unsigned char distB2C = 40; //var definition + init in a single inline
  unsigned char distA2C = distA2B + distB2C;
  
  printf("Total distabce from A2C is %d km\n",distA2C); //int
  printf("Total distabce from A2C is %x km\n",distA2C); //hex
  printf("Total distabce from A2C is %X km\n",distA2C); //capital hex
  printf("Total distabce from A2C is %o km\n",distA2C); //octal
  printf("Total distabce from A2C is %u km\n",distA2C); //unsigned int
  printf("Total distabce from A2C is %c km\n",distA2C); //char
  
return 0;
}
