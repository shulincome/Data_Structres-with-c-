#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char *name[4] = { "Justinian", "Momo", "Becky", "Bush" };	//һάָ������ 
    char name1[4][10] = { "Justinian", "Momo", "Becky", "Bush" };//��ά�ַ�������  
    int i;
    cout<<"---------- һάָ������Ĵ洢��ʽ --------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name["<<i<<"] = \""<<name[i]<<"\"\t";
        cout<<"��ռ��ַ��"<<(int *)name[i]<<endl; //���name[i]��ռ��ַ   
    }
    cout<<"------------ ��ά�ַ�������Ĵ洢��ʽ--------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name1["<<i<<"] = \""<<name1[i]<<"\"\t";
         cout<<"��ռ��ַ��"<<(int *)name1[i]<<endl; //���name1[i]��ռ��ַ  
     }    
    system("pause");
    return 0;
}

