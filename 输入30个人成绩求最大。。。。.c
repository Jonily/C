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
	printf("���ֵΪ%f\n",m);
}
void min(float *p)
{
	float m=*p;
	int i;
	for (i=1;i<=29;i++)
	if(m>p[i])
	  m=p[i];
	  printf("��СֵΪ%f\n",m);
}
void ave(float*p)
{
	float s=0;
	while (*p)
	{
		s+=*p;
		p++;
	}
	printf("ƽ��ֵΪ%f\n",s/30);
}
main()
{
	printf("����30��ѧ���ĳɼ�\n"); 
	float stu [30];
	int i;
	for(i=0;i<30;i++)
	scanf("%f",&stu[i]);
	max(stu);
	min(stu);
	ave(stu);
	
}


