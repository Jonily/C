#include <stdio.h>
main()
 {
 	int i,j,k,*p,max,m;
 	int a[3][4];
 	p=a[0];
 	for (i=0;i<12;i++)
 	      scanf ("%d",p+i);
 	    for (j=0;j<11;j++)
 	       for (k=0;k=11-j;k++)
 	          if (*(p+k)>*(p+k+1))
 	            {   max=*(p+k);
 	               *(p+k)=*(p+k+1);
 	               *(p+k+1)=max;
 	               } 
 	               for (m=0;m<12;m++)
 	               printf("%4d",*(p+m));
  } 
