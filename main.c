/*
  main.c
  str2csv

  Created by Michael Lenz lenz@sdf-eu.org on 29.10.18.
  Copyright (c) 2018 Michael Lenz lenz@sdf-eu.org . All rights reserved.
*/

#include <stdio.h>
#include <string.h>

int cut(char *str, int begin, unsigned int len)
{
    size_t l;
    l = strlen(str);
    memmove(str, str + len, l - len + 1);
    
    return len;
}

int main (int argc, char * argv[])
{
    int n = 0, pos = 0, next=1, prog=0;
    size_t leng = 0;
    char *ptr;
    char *string = argv[argc-1];
    
    /* determine max length of atributes */
    
    if ( (argc-2)%3 != 0 || argc <= 0 || (strcmp(argv[1], "--help") ) == 0)
    {
        printf("\n\nString to CSV converter/parser - http://lenz.sdf-eu.org/ \
               \n!!! Incomplete arguments. Please check input \
               \nUsage: ./str2csv ['pattern_to_find'] ['print_from_pattern'] ['print_to_pattern'] ... ['str'] \
               \nExample: ./str2csv '<Market' '>' '</Market>' '<Market>No beer</Market>' \
               \nOutput: No beer;\n\n\n");
        
        return 1;
    }
    
    
        /* process */
    
        for (n=1;n<=(argc-1);n++)
        {
            
            if ( next == 0)
            {
                next= next + 1;
                ptr = strstr(string, argv[next]);
                
            }
            else
            {
                if ( (argc-1) - next != 0 )
                {
                    ptr = strstr(string, argv[next]);
                    
                    if (ptr == NULL)
                    {
                        break;
                    }
                    
                    if (ptr != NULL)
                    {
                        leng = strlen(argv[next]);
                        pos = (int)(ptr - string);
                        leng = leng + pos;
                        cut(string, 0, (int)leng);
                        
                        if (n == 2 || n == ( prog + 3 ))
                        {
                            ptr = strstr(string, argv[next+1]);
                            pos = (int)( ptr - string );
                            printf ("%.*s;", pos, string);
                            prog = n;
                            
                        }
                        
                    }
                    
                    next = next + 1;
                }
                else
                {
                    next = 1;
                }
                
            }
            
        }
    
        (void)ptr;
        printf ("\n");
    
    return 0;
}
