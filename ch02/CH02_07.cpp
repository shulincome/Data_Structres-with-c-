#include <iostream>
#include <cstdlib>

using namespace std;

int main(){	 
    char arr2[50];	 
    int i,sum;	 
    cout << "请输入字符串：";	 
    cin >> arr2;     			//获取用户输入的字符串    
     for (i=0;i<50;i++)	
      {		if (arr2[i]=='\0')		
            {	break;		//如果是用户输入字符串的结尾就中断循环	
           	}		
            sum=i;			//记录空字符前一个字符的下标值	
      }
      //----------------------------    
       for (i=sum;i>=0;i--)    
 //将用户输入的字符串反向输出	 
     {		cout << arr2[i];
   	 }	 
        cout << endl;	
        
        system("pause");
        return 0;
     }
