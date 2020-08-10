#include <stdio.h>
#include <string.h>
/*void fun(char str[8][4])
 {
 	char *p[8],*q; 
 	int i,j,k;
 	for(j=0;j<7;j++)
 	 for(i=0;j<7-j;i++)
 	  if (strcmp(p[i],p[i+1])<=0)
 	    {
 	    	q=p[i];
 	    	p[i]=p[i+1];
 	    	p[i+1]=q;
		 }
		 for(i=0;i<7;i++)
		  puts(p[i]);
 }
 */
 
  main ()
  {
  	int i;
  	char *w[8];
  	char str[8][4];
  	for (i=0;i<8;i++)
  	  w[i]=str[i];
  	for(i=0;i<8;i++)
  	 gets(w[i]);
  
  	 puts(w[i-1]);
  }
 
  
