#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int i;		//���ڼ����ַ����ĳ���
	char str[30];
	char str1[30];
	cout<<"�������ַ���:";
	//�����ַ���
	cin>>str;
	cout<<"������ַ���Ϊ:"<<str<<endl;
	//����forѭ������i,����������ַ������Ƶ�str1�ַ���
	for(i=0; str[i]!='\0';i++)
	{
 		str1[i]=str[i];	//��һ�����ַ����� 
    }
    str1[i]='\0';		//�ڼ����ַ�������ʱ�����������ַ�����β�ַ�'\0' 
 	cout<<"���ַ�����"<<i<<"���ַ�"<<endl;
 	cout<<"ԭ�ַ���str="<<str<<endl;
	cout<<"���ƺ��ַ���str1="<<str1<<endl;
 	
    system("pause");
    return 0;
}
