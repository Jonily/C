#include<stdio.h>
int main()
{
	int jw,w=1,t,a[5000]; 
	int i,j,z,n; 
	a[0] = 1;
	printf("请输入n的值:\n");
	scanf("%d",&n);
//	Jw为进位 W为位数 a为大数储存 T储存临时数据 
	for(i=1; i<=n; i++)
	{
	 	for(j=1,jw=0; j<=w; j++)
		 {
	 		t = a[j-1] * i + jw;	// 使被拆分为数组的大数的每一项与 i 相乘并且加上进位  
			a[j-1] = t % 10;		// 将余数存到当前项中 
			jw = t / 10;   			//取进位 
		} 
		
		while( jw )
		{
			a[++w-1] = jw % 10;
			jw /= 10; 
		}
		//当有进位的时候将进位给到下一项		
		for(z = w; z>=1; z--){
			printf("%d",a[z-1]);
		}
		printf("\n");	
	}
	return 0;
}
