#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char Str[6][30]={	"�ż�    ����ҹ��",       // ��������ʼ����ά�ַ�������
						"================",   // ʡ����ÿ��Ԫ��֮��Ĵ�����
						"��������˪����",
						"�������Գ���",
						"���ճ��⺮ɽ��",
						"ҹ���������ʹ�"	};
	int i;
	for (i=0; i<6; i++)
		cout << Str[i] << endl;                   // ����ַ������������
		
	system("pause");
	return 0;
}
