//tree.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
   int n, a, i, j;
   cout<<"Enter n:";cin>>n;
     
   for(j=1; j<=n-1; j++) cout<<" "; //���������
   cout<<"*"<<endl;                 //������ ���
   a=n-2;
   
   for (i=1; i<=n-2;i++)
   {
    for(j=1;j<=a;j++) cout<<" "; //��������� ����������� ����� "*"
    for(j=1;j<=n-a;j++) cout<<"*"<<" "; //��������� "*" � ����������� ����� � �������
    cout<<endl; //��� ���
    a-=1;
   }
  
   for(j=1;j<=n;j++) cout<<"*"<<" "; //��������� ��������� ���
   cout<<endl;
   
   
   system("PAUSE");
   return 0;
}
