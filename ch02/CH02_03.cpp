#include <iostream>
using namespace std;


int main()
{
 int arr[2][2];
 int sum;
  cout<<"|a1 b1|"<<endl;
  cout<<"|a2 b2|"<<endl;
  cout<<"������a1:";
  cin>>arr[0][0];
  cout<<"������b1:";
  cin>>arr[0][1];
  cout<<"������a2:";
  cin>>arr[1][0];
  cout<<"������b2:";
  cin>>arr[1][1];
  sum = arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];//���������ʽ��ֵ 
  cout<<"|"<<arr[0][0]<<" "<<arr[0][1]<<"|"<<endl;
  cout<<"|"<<arr[1][0]<<" "<<arr[1][1]<<"|"<<endl;
 
  cout<<"sum="<<sum<<endl;
  
  system("pause");
  return 0;
}
