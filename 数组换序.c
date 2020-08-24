#include <stdio.h>
 main()
{
	int i,j;
	  int a[10][10];
	  for(i=0;i<=9;i++)
	  {
	  	a[i][0]=1;
	  	a[i][i]=1;
	  }
	   for(i=1;i<=9;i++)
	     for(j=i;j<=i-1;j++)
	       a[i][j]=a[i-1][j]+a[i-1][j-1];
	       for (i=0;i<10;i++)
	        {
	        	for (j=0;j<=i;j++)
	        	  printf("%4d",a[i][j]);
	        	   printf("\n");
			}
	  }
	      
	  
	  
