#include<stdio.h>
int main()
{
	int jw,w=1,t,a[5000]; 
	int i,j,z,n; 
	a[0] = 1;
	printf("������n��ֵ:\n");
	scanf("%d",&n);
//	JwΪ��λ WΪλ�� aΪ�������� T������ʱ���� 
	for(i=1; i<=n; i++)
	{
	 	for(j=1,jw=0; j<=w; j++)
		 {
	 		t = a[j-1] * i + jw;	// ʹ�����Ϊ����Ĵ�����ÿһ���� i ��˲��Ҽ��Ͻ�λ  
			a[j-1] = t % 10;		// �������浽��ǰ���� 
			jw = t / 10;   			//ȡ��λ 
		} 
		
		while( jw )
		{
			a[++w-1] = jw % 10;
			jw /= 10; 
		}
		//���н�λ��ʱ�򽫽�λ������һ��		
		for(z = w; z>=1; z--){
			printf("%d",a[z-1]);
		}
		printf("\n");	
	}
	return 0;
}
