//tree.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
   int n, a, i, j;
   cout<<"Enter n:";cin>>n;
     
   for(j=1; j<=n-1; j++) cout<<" "; //prints
   cout<<"*"<<endl;                 //the first line
   a=n-2;
   
   for (i=1; i<=n-2;i++)
   {
    for(j=1;j<=a;j++) cout<<" "; //prints the spaces before "*"
    for(j=1;j<=n-a;j++) cout<<"*"<<" "; //prints "*" and the spaces inside the tree
    cout<<endl; //new line
    a-=1;
   }
  
   for(j=1;j<=n;j++) cout<<"*"<<" "; //prints the last line
   cout<<endl;
   
   
   system("PAUSE");
   return 0;
}
