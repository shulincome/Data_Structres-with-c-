#include <iostream>
#include <cstdlib>

using namespace std;

int main(){	 
    char arr2[50];	 
    int i,sum;	 
    cout << "�������ַ�����";	 
    cin >> arr2;     			//��ȡ�û�������ַ���    
     for (i=0;i<50;i++)	
      {		if (arr2[i]=='\0')		
            {	break;		//������û������ַ����Ľ�β���ж�ѭ��	
           	}		
            sum=i;			//��¼���ַ�ǰһ���ַ����±�ֵ	
      }
      //----------------------------    
       for (i=sum;i>=0;i--)    
 //���û�������ַ����������	 
     {		cout << arr2[i];
   	 }	 
        cout << endl;	
        
        system("pause");
        return 0;
     }
