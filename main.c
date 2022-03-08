#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    if ( argc != 4)
    {
      printf("Invalid number of arguments\n");
      return 1;
    }
    char * nbr1 = argv[1];
    char * oper = argv[2];
    char * nbr2 = argv[3];
    char * endPtr;
    int i_nbr1 = (int)strtol( nbr1, &endPtr, 10 );
    if ( endPtr == nbr1 ) {
       printf("The first argument is not an integer\n");
       return 1;
    }
    if ( strcmp(oper,"-eq") !=0 && strcmp(oper,"-ge") !=0 && strcmp(oper,"-gt") !=0 && strcmp(oper,"-le") !=0 && strcmp(oper,"-lt") !=0 && strcmp(oper,"-ne") !=0 )  {
       printf("The second argument is not a valid operator\n");
       return 1;
    }
    int i_nbr2 = (int)strtol( nbr2, &endPtr, 10 );
    if ( endPtr == nbr2 ) {
       printf("The third argument is not an integer\n");
       return 1;
    }
    if ( strcmp(oper,"-eq") == 0 ) return i_nbr1 == i_nbr2 ? 0 : 1;
    if ( strcmp(oper,"-ge") == 0 ) return i_nbr1 >= i_nbr2 ? 0 : 1;
    if ( strcmp(oper,"-gt") == 0 ) return i_nbr1 > i_nbr2 ? 0 : 1;
    if ( strcmp(oper,"-le") == 0 ) return i_nbr1 <= i_nbr2 ? 0 : 1;
    if ( strcmp(oper,"-lt") == 0 ) return i_nbr1 < i_nbr2 ? 0 : 1;
    if ( strcmp(oper,"-ne") == 0 ) return i_nbr1 != i_nbr2 ? 0 : 1;
    return 0;
}
