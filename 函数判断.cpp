#include <iostream>
using namespace std;
void function(int j)
{
	
  int i;
 for (i = 2;i <=j;i++)
       { 
			if (j % i == 0) 
      {
				cout << "no" << "是素数";
				break;
			}
     else 
		cout << "yes" << "不是素数";	
		break; 	
}
}
int main()
{
	  int i,j;
     cout<<"请输入数字";
	  cin >> j;
	  if (j<2)
	  { 
	cout<< "no"<<"不是素数" ;
	}
	function(j);
	return 0;
}

