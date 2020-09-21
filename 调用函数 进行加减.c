#include <stdio.h>
 void max(float*p)
{
	float m=*p;
	while (*p)
	{
		if(*p>m)
		 m=*p;
		 p++;
	}
	printf("Max=%f\n",m);
}
void min(float *p)
{
	float m=*p;
	int i;
	for (i=1;i<=29;i++)
	if(m>p[i])
	  m=p[i];
	  printf("Min=%f\n",m);
}
void ave(float*p)
{
	float s=0;
	while (*p)
	{
		s+=*p;
		p++;
	}
	printf("Ave=%f\n",s/3);
}
main()
{
	float stu [30];
	int i;
	for(i=0;i<30;i++)
	scanf("%f",&stu[i]);
	max(stu);
	min(stu);
	ave(stu);
}


