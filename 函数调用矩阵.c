#include <stdio.h>
#include <stdlib.h>
int fun(int n,int *p)
  {
  	int i,j,sum;
	for(i=0;i<j;i++)
	 {
	 	if(i%n==0)
	 	printf("\n");
	 	printf("%d",p[i]);//������� 
	  } 
	  printf("\n����%d�׷����Ϊ%d",n,sum);//�������� 
	      
	      
 } 
     main()
          {  
          	int i,j,m=1,q=1,n,sum=0;
	printf("�����뷽��Ľ�����\n");
	scanf("%d",&n);//������� 
	j=n*n;
	int*p=(int*)malloc(j*sizeof(int));//�����ڴ� 
		for(i=0;i<j;i++)
	{
		if(i%n==0&&i!=0)
		{
			m++;
		    q=1; 
		}
		printf("�������%d�ŵ�%d������\n",m,q++);
		scanf("%d",&p[i]);//���뷽������ 
		  sum+=p[i];//������� 
	}
    fun(n,p); 
    free(p);
 }

