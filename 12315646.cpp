#include<stdio.h>
#include<string.h>
#define MAXSIZE 111

typedef struct{long long ID;    //学号
  char Name[20];      //名字 
  char Sex[5];     //性别
   int Chinese;   //语文成绩
   int English; //英语成绩
   int Math;   //数学成绩
   int SumScore; //总分
   }student;
	typedef struct{student *stu;int length;}
	List;
void InitList(List &L); //初始化学籍系统
void Creat(List &L);   //创建学籍系统
void Print(List &L);  //打印所有学生信息
void SinglePrint(List &L,int i); //打印单一学生信息
void InsertSort(List &L);       //按照学号进行插入排序 

int Partition(List &L,int low,int high);  //按照总分
void QSort(List &L,int low,int high);    //进行
void QuickSort(List &L);                //快速排序
void Sort(List &L);                    //排序汇总
void Search_Seq(List &L,char key[]);  //按照姓名进行顺序查找
void Search_Bin(List &L,long long key);  //按照学号进行二分查找
void Search(List &L);               //查找汇总 
void InitList(List &L)

	    {   
		L.stu=new student[MAXSIZE]; 
		L.length=0;
		}

	    void Creat(List &L)
		    {   
	    printf("请输入学生总数:");    
		int n;   
	    scanf("%d",&n);   
		printf("请依次输入%d个学生的学号、姓名、性别、语文、英语、数学,用空格隔开\n",n);  
		for(int i=1;i<=n;++i)    
		{   
		scanf("%lld%s%s%d%d%d",&L.stu[i].ID,L.stu[i].Name,L.stu[i].Sex,&L.stu[i].Chinese,&L.stu[i].English,&L.stu[i].Math);      
		L.stu[i].SumScore=L.stu[i].Chinese+L.stu[i].English+L.stu[i].Math;       
		++L.length;  
		}
			}
			
			
			
		void Print(List &L)
		{    
	    printf("    学号       姓名    性别   语文   英语   数学    总分\n");   
	    printf("--------------------------------------------------------\n");      
		for(int i=1;i<=L.length;++i) 
	    printf("%12lld   %-6s   %s     %-2d     %-2d     %-2d     %-3d\n",L.stu[i].ID,L.stu[i].Name,L.stu[i].Sex,L.stu[i].Chinese,L.stu[i].English,L.stu[i].Math,L.stu[i].SumScore);
		}
		
		void SinglePrint(List &L,int i)
		{    
		printf("    学号       姓名    性别   语文   英语   数学    总分\n"); 
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
		printf("按照总分进行快速排序后:\n");   
		Print(L);  
		InsertSort(L); 
		printf("按照学号进行插入排序后:\n");   
		Print(L);
		}
		
		
		void Search_Seq(List &L,char key[])
		{  
		printf("顺序查找:\n"); 
		int flag=0; 
		for(int i=1;i<=L.length;++i)   
		if(strcmp(L.stu[i].Name,key)==0)  
		{  
		flag=1;    
		printf("已经找到,该学生信息如下:\n");   
		SinglePrint(L,i); 
		}   
		if(!flag)  
		printf("没有找到!\n");
		}
		
		
		void Search_Bin(List &L,long long key){ 
		printf("二分查找:\n");  
		int low=1,high=L.length,mid; 
		while(low<=high) 
		{     
		mid=(low+high)/2;  
		if(key==L.stu[mid].ID)   
		{    
		printf("已经找到,该学生信息如下:\n");  
		SinglePrint(L,mid); 
		return;     
		}    
		else if(key<L.stu[mid].ID)         
		high=mid-1;  
		else         
		low=mid+1;  
		}   
		printf("没有找到!\n");  
		return;
		}
		
		
		void Search(List &L)
		           { 
		printf("请输入查找次数:");   
		int times;    
		scanf("%d",&times); 
		while(times--) 
		      {    
		int way; 
		printf("请输入一个数字代表查询方式,1代表按照学号使用二分法查询,其他代表按照姓名使用顺序法查询:");  
		scanf("%d",&way);   
		if(way==1)    
		{           
		printf("请输入要查找的关键字:");           
		long long key;            
		scanf("%lld",&key);            
		Search_Bin(L,key);       
		}        
		else       
		{           
		printf("请输入要查找的关键字:");           
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



