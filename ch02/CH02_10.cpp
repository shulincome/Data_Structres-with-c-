#include<iostream>
#include<cstdlib> 
#include<string>		//�����ַ���ͷ�ļ�

using namespace std;

int main()
{
    char ch[]=", "; 
    string firstname;	//�����ַ����� 
    string lastname;	//�����ַ����� 
    string input1("����������:");
    string input2="����������:";
    
    cout<<input1;
    cin>>lastname;	//�����ַ��� 
    cout<<input2;
    cin>>firstname;	//�����ַ��� 
    
    string fullname=firstname+ch+lastname;	//������������ַ����Ĵ��� 
	cout<<"����ȫ��Ϊ:"<<fullname<<endl;
    
    system("pause");
    return 0;	
 
 }
