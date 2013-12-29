/*
AUTHOR: Dhruv Bhaskar <dhruvbhaskar95@gmail.com>
LAST MODIFIED: 28 December, 2013
*/
#include <stdio.h>
#include <string.h>
#define TAB 9
#define QUOTE 34
#define COMMA 44
int main()
{
   int i,j;
   char *source[] = {
	"/*", 
	"AUTHOR: Dhruv Bhaskar <dhruvbhaskar95@gmail.com>", 
	"LAST MODIFIED: 28 December, 2013", 
	"*/", 
	"#include <stdio.h>", 
	"#include <string.h>", 
	"#define TAB 9", 
	"#define QUOTE 34", 
	"#define COMMA 44", 
	"int main()", 
	"{", 
	"   int i,j;", 
	"   char *source[] = {", 
	" ", 
	"};", 
	"for(i = 0; i < 13; i++)", 
	"   puts(source[i]);", 
	"for (i = 0; i < 35; i++)  // print source", 
	"{", 
	"    putchar(TAB);", 
	"    putchar(QUOTE);", 
	"    for (j = 0; j < strlen(source[i]); j++)", 
	"       putchar(source[i][j]);", 
	"    putchar(QUOTE);", 
	"    putchar(COMMA);", 
	"    puts(source[13]);  // line break", 
	"}", 
	"for (i = 14; i < 35; i++)", 
	"{", 
	"    if (i < 33)", 
	"       putchar(TAB);", 
	"    puts(source[i]);", 
	"}", 
	"return 0;", 
	"}", 
	};
	for(i = 0; i < 13; i++)
	   puts(source[i]);
	for (i = 0; i < 35; i++)  // print source
	{
	    putchar(TAB);
	    putchar(QUOTE);
	    for (j = 0; j < strlen(source[i]); j++)
	       putchar(source[i][j]);
	    putchar(QUOTE);
	    putchar(COMMA);
	    puts(source[13]);  // line break
	}
	for (i = 14; i < 35; i++)
	{
	    if (i < 33)
	       putchar(TAB);
	    puts(source[i]);
	}
return 0;
}
