#include <iostream>
using namespace std;
void function(int j)
{
	
  int i;
 for (i = 2;i <=j;i++)
       { 
			if (j % i == 0) 
      {
				cout << "no" << "������";
				break;
			}
     else 
		cout << "yes" << "��������";	
		break; 	
}
}
int main()
{
	  int i,j;
     cout<<"����������";
	  cin >> j;
	  if (j<2)
	  { 
	cout<< "no"<<"��������" ;
	}
	function(j);
	return 0;
}

