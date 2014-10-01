#include <stdio.h>
#include <assert.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char *argv[])
{
  FILE *fp;
  char buff[255];

  if ( argc != 2 )
  {
        printf( "usage: %s foo.km", argv[0] );
  } else {
        
    /* Open file */
    fp = fopen(argv[1], "r");
    if( fp != NULL ){
      while ( !feof(fp ) ){
        memset(buff, '\0', sizeof( buff) );
        fscanf(fp, "%s", &buff);
        printf("%s\n", buff );
      }
            
      /* Close file */
      fclose(fp);
    } else {
      printf("Could not open file '%s'", argv[1]);
            
    }
  }
}
