#include <stdio.h>
 main ()
  {
  	int (*p)[4],b[3][4],i,j,k,m,n;
  	p=b;
  	for (i=0;i<3;i++)
  	 for (j=0;j<4;j++)
  	  scanf ("%d",*(p+i)+j);
  	  for (k=0;k<3;k++)
  	    for (m=0;m<4;m++)
  	     printf ("4%d",*((p+k)+m));
  	     printf("\n");
  	     for(n=0;n<3;n++)
  	      for(i=0;i<4;i++)
  	  printf("%4d",(*(p+n))[i]);
   } 
