//tree.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
   int n, a, i, j;
   cout<<"Enter n:";cin>>n;
     
   for(j=1; j<=n-1; j++) cout<<" "; //отпечатва
   cout<<"*"<<endl;                 //първия ред
   a=n-2;
   
   for (i=1; i<=n-2;i++)
   {
    for(j=1;j<=a;j++) cout<<" "; //отпечатва интервалите преди "*"
    for(j=1;j<=n-a;j++) cout<<"*"<<" "; //отпечатва "*" и интервалите вътре в дървото
    cout<<endl; //нов ред
    a-=1;
   }
  
   for(j=1;j<=n;j++) cout<<"*"<<" "; //отпечатва последния ред
   cout<<endl;
   
   
   system("PAUSE");
   return 0;
}
