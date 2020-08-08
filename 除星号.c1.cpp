#include <stdio.h>
#include <string.h>
 main ()
 {
  printf("ÇëÊäÈë×Ö·û\n");
  int n ;
     char *p1,*p2,*p;
 char ch1[80];
  gets(ch1);
  for(p1=ch1;*p1=='*';p1++)
    p2=p1;
    n=strlen(ch1)-1;
  for(p=ch1+n;*p=='*';p--)
    ;
    while(p1<=p)
  {
   if (*p1!='*')
    *p2++=*p1++;
    else
     p1++;
 }
     while (*p!='\0')
        *p2++=*p++;
     *p2='\0';
     puts(ch1);  
}
