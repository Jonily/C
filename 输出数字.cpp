   #include <stdio.h>
  
   int main ()
  { int a,b,c,d,e,f,g;
 
    scanf ("%d,%d",&a,&b);
    
    d=a/10;
	 e=a%10;
	   f=b/10; 
	   g=b%10; 
    c=d*1000+f*100+e*10+g;
    
    printf("组合后的数为%d\n",c); 
  } 
