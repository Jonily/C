#include <stdio.h>
#include <stdlib.h>
int fun(int n,int *p)
  {
  	int i,j,sum;
	for(i=0;i<j;i++)
	 {
	 	if(i%n==0)
	 	printf("\n");
	 	printf("%d",p[i]);//输出方阵 
	  } 
	  printf("\n上述%d阶方阵和为%d",n,sum);//输出方阵和 
	      
	      
 } 
     main()
          {  
          	int i,j,m=1,q=1,n,sum=0;
	printf("请输入方阵的阶数：\n");
	scanf("%d",&n);//方阵阶数 
	j=n*n;
	int*p=(int*)malloc(j*sizeof(int));//申请内存 
		for(i=0;i<j;i++)
	{
		if(i%n==0&&i!=0)
		{
			m++;
		    q=1; 
		}
		printf("请输入第%d排第%d个数字\n",m,q++);
		scanf("%d",&p[i]);//输入方阵数据 
		  sum+=p[i];//数据求和 
	}
    fun(n,p); 
    free(p);
 }

