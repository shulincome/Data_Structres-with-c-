#include <iostream>
using namespace std;

int main()
{
     int Score[5]={ 87,66,90,65,70 };    
      //������������Score[5], ������5���ɼ� 
     int count, Total_Score=0;
     for (count=0; count < 5; count++)		// ִ�� for ѭ����ȡѧ���ɼ� 
     {
       cout<<"��"<<count+1<<"λѧ���ķ���:"<<Score[count]<<endl;  
       Total_Score+=Score[count];		//�������ж�ȡ�����������ܷ�
      }
      cout<<"-------------------------"<<endl;
      cout<<"5λѧ�����ܷ�:"<<Total_Score<<endl;  
     //����ɼ��ܷ�
     
     system("pause");
     return 0;
}
