#include <iostream>
using namespace std;


int main()
{

    int num[2][3][3]={{{33,45,67},
                       {23,71,56},
                       {55,38,66}},
                       {{21,9,15 },
                        {38,69,18},
                        {90,101,89}}};		//������ά���� 
    int i,j,k,min=num[0][0][0];				//����mainΪnum����ĵ�һ��Ԫ��
    
    for(i=0;i<2;i++)
      for(j=0;j<3;j++)    
        for(k=0;k<3;k++)   
         if(min>=num[i][j][k])
           min=num[i][j][k];				//��������ѭ���ҳ���Сֵ 
    
    cout<<"��Сֵ= "<<min<<endl;
                           
	system("pause");
	return 0;
}
