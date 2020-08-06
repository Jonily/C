#include <stdio.h>
 main ()
   {
   	float a;
   	char b,c,d,e,f;
      b='A',c='B',d='C', e='D', f='E';
   	printf("ÊäÈëÄãµÄ³É¼¨\n");
   	 scanf("%f",&a);
   	 if  (a>=90)
   	   printf("%c",b);
   	   else if  (a<90&&a>=80)
   	   printf("%c",c);
   	   else if (a<80&&a>=70)
   	   printf("%c",d);
   	   else if (a<70&&a>=60)
   	   printf("%c",e);
   	   else if (a<60)
   	   printf ("%c",f);
	} 
