#include<stdio.h>
#include<string.h>
#define MAXSIZE 111

typedef struct{long long ID;    //ѧ��
  char Name[20];      //���� 
  char Sex[5];     //�Ա�
   int Chinese;   //���ĳɼ�
   int English; //Ӣ��ɼ�
   int Math;   //��ѧ�ɼ�
   int SumScore; //�ܷ�
   }student;
	typedef struct{student *stu;int length;}
	List;
void InitList(List &L); //��ʼ��ѧ��ϵͳ
void Creat(List &L);   //����ѧ��ϵͳ
void Print(List &L);  //��ӡ����ѧ����Ϣ
void SinglePrint(List &L,int i); //��ӡ��һѧ����Ϣ
void InsertSort(List &L);       //����ѧ�Ž��в������� 

int Partition(List &L,int low,int high);  //�����ܷ�
void QSort(List &L,int low,int high);    //����
void QuickSort(List &L);                //��������
void Sort(List &L);                    //�������
void Search_Seq(List &L,char key[]);  //������������˳�����
void Search_Bin(List &L,long long key);  //����ѧ�Ž��ж��ֲ���
void Search(List &L);               //���һ��� 
void InitList(List &L)

	    {   
		L.stu=new student[MAXSIZE]; 
		L.length=0;
		}

	    void Creat(List &L)
		    {   
	    printf("������ѧ������:");    
		int n;   
	    scanf("%d",&n);   
		printf("����������%d��ѧ����ѧ�š��������Ա����ġ�Ӣ���ѧ,�ÿո����\n",n);  
		for(int i=1;i<=n;++i)    
		{   
		scanf("%lld%s%s%d%d%d",&L.stu[i].ID,L.stu[i].Name,L.stu[i].Sex,&L.stu[i].Chinese,&L.stu[i].English,&L.stu[i].Math);      
		L.stu[i].SumScore=L.stu[i].Chinese+L.stu[i].English+L.stu[i].Math;       
		++L.length;  
		}
			}
			
			
			
		void Print(List &L)
		{    
	    printf("    ѧ��       ����    �Ա�   ����   Ӣ��   ��ѧ    �ܷ�\n");   
	    printf("--------------------------------------------------------\n");      
		for(int i=1;i<=L.length;++i) 
	    printf("%12lld   %-6s   %s     %-2d     %-2d     %-2d     %-3d\n",L.stu[i].ID,L.stu[i].Name,L.stu[i].Sex,L.stu[i].Chinese,L.stu[i].English,L.stu[i].Math,L.stu[i].SumScore);
		}
		
		void SinglePrint(List &L,int i)
		{    
		printf("    ѧ��       ����    �Ա�   ����   Ӣ��   ��ѧ    �ܷ�\n"); 
		printf("--------------------------------------------------------\n"); 
		printf("%12lld   %-6s   %s     %-2d     %-2d     %-2d     %-3d\n",L.stu[i].ID,L.stu[i].Name,L.stu[i].Sex,L.stu[i].Chinese,L.stu[i].English,L.stu[i].Math,L.stu[i].SumScore);
		}
		
		
		
		void InsertSort(List &L)
		    {  
		int i,j;  
		for(i=2;i<=L.length;++i)  
		if(L.stu[i].ID<L.stu[i-1].ID)  
		{        
		L.stu[0]=L.stu[i];   
		L.stu[i]=L.stu[i-1];  
		for(j=i-2;L.stu[0].ID<L.stu[j].ID;--j)  
		L.stu[j+1]=L.stu[j];   
		L.stu[j+1]=L.stu[0]; 
		}
		     }
		
									
		int Partition(List &L,int low,int high)
		          { 
		L.stu[0]=L.stu[low];  
		int temp=L.stu[low].SumScore;   
		while(low<high)  
		  {    
		while(low<high&&L.stu[high].SumScore>=temp)   
		--high;       
		L.stu[low]=L.stu[high];       
		while(low<high&&L.stu[low].SumScore<=temp)           
		++low;    
		L.stu[high]=L.stu[low]; 
		   }   
		L.stu[low]=L.stu[0];  
		return low;
				   }
				   
	    void QSort(List &L,int low,int high)
		       { 
		if(low<high) 
		   {    
		int mid=Partition(L,low,high);   
		QSort(L,low,mid-1);    
		QSort(L,mid+1,high);   
		   }
			   }
			   
		void QuickSort(List &L)
		{ 
		QSort(L,1,L.length);
		}
		
		void Sort(List &L)
		{  
	    QuickSort(L);
		printf("�����ֽܷ��п��������:\n");   
		Print(L);  
		InsertSort(L); 
		printf("����ѧ�Ž��в��������:\n");   
		Print(L);
		}
		
		
		void Search_Seq(List &L,char key[])
		{  
		printf("˳�����:\n"); 
		int flag=0; 
		for(int i=1;i<=L.length;++i)   
		if(strcmp(L.stu[i].Name,key)==0)  
		{  
		flag=1;    
		printf("�Ѿ��ҵ�,��ѧ����Ϣ����:\n");   
		SinglePrint(L,i); 
		}   
		if(!flag)  
		printf("û���ҵ�!\n");
		}
		
		
		void Search_Bin(List &L,long long key){ 
		printf("���ֲ���:\n");  
		int low=1,high=L.length,mid; 
		while(low<=high) 
		{     
		mid=(low+high)/2;  
		if(key==L.stu[mid].ID)   
		{    
		printf("�Ѿ��ҵ�,��ѧ����Ϣ����:\n");  
		SinglePrint(L,mid); 
		return;     
		}    
		else if(key<L.stu[mid].ID)         
		high=mid-1;  
		else         
		low=mid+1;  
		}   
		printf("û���ҵ�!\n");  
		return;
		}
		
		
		void Search(List &L)
		           { 
		printf("��������Ҵ���:");   
		int times;    
		scanf("%d",&times); 
		while(times--) 
		      {    
		int way; 
		printf("������һ�����ִ����ѯ��ʽ,1������ѧ��ʹ�ö��ַ���ѯ,��������������ʹ��˳�򷨲�ѯ:");  
		scanf("%d",&way);   
		if(way==1)    
		{           
		printf("������Ҫ���ҵĹؼ���:");           
		long long key;            
		scanf("%lld",&key);            
		Search_Bin(L,key);       
		}        
		else       
		{           
		printf("������Ҫ���ҵĹؼ���:");           
		char key[20];           
		scanf("%s",key);           
		Search_Seq(L,key);       
		}   
		     }
		           }
		
		
		int main()
		{   
		List L;    
		InitList(L);    
		Creat(L);   
		Sort(L);    
		Search(L);   
		return 0;
		}



