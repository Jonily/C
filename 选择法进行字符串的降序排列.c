#include <stdio.h>
#include <string.h>
main()
{
	char*p[8],str[8][4],*q;
	 int i,j;
	 for(i=0;i<8;i++)
	 p[i]=str[i];
	 for(i=0;i<8;i++)
	  gets(p[i]);
	   for(j=0;j<7;j++)
	     for(i=0;i<7-i;i++)
	      if (strcmp(p[i],p[i+1])<=0)
	         {
	         	q=p[i];
	         	p[i]=p[i+1];
	         	p[i+1]=q;
			 }
			 for (i=0;i<7;i++)
			  puts(p[i]);
}
	  
	   
