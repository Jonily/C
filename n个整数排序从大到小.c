 #include<stdio.h>
 #include <stdlib.h>
  int main ()
{
		int i,j,n,sum;
	     printf("输入的整数个数为\n");
	     scanf("%d",&n);
	     int*a=(int*)malloc(n*sizeof(int));
	     printf("输入整数为\n"); 
	        for(i=0;i<n;i++)
	           scanf("%d",&a[i]);
	      for(i=0;i<n-1;i++)
		  	for(j=0;j<n-1-i;j++)
		  	 if (a[j]<a[j+1])
		  	   {
		  	   	   sum=a[j],a[j]=a[j+1],a[j+1]=sum;
				 }
		   
	     printf("输出排序后的整数\n");
	     for(i=0;i<n;i++)
	      printf ("%4d",a[i]);
	      printf("\n");
	      free(a);
	      return 0;
}


