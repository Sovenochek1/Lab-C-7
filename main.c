#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    char x[100];
    char *p, *word;
    int len;
    int maxlen=0;
 
    printf("Vvedite stroku: ");
    fflush(stdin);
    gets(x);
    
    p=strtok(x," ");
 
    while(p!=0)
    {
        len=strlen(p);
        
        if(maxlen<len)
        {
        maxlen=len;
        word=p;
        }
        p=strtok(0," ");
    }
    printf("\nMax word: %s",word);
    getch();
    return 0;
}