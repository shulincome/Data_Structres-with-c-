#include <iostream>
#include <cstdlib>
#include <cstring>	
#include <cctype>		//�������жϺ����ļ�

using namespace std;

int main()
{
	int lower = 0;
	char string[40];
	
	cout<<"�������ַ���:"; 
    cin.getline(string,40);			//������ַ�����40���ַ� 
	int len = strlen(string);
	for (int i = 0; i <= len; i++)	
		if (islower(string[i]) != 0)		//��Сд�ַ����1	
			lower++;
	cout <<string<<"�ַ�����Сд�ַ��� " << lower << "��"<<endl;
	
	system("pause");
	return 0;
}

