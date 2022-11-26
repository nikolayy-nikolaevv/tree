//tree.cpp
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() 
{
	int rows;
	cout<<"Enter row:";
	cin>>rows;
	
	for(int i = 1; i<=rows; i++) {
		cout<<setw(rows-i+2);
		for(int stars=1; stars<=i; stars++) {
			cout<<" *";
		}
		cout<<endl;
	}
	
	
	system("PAUSE");
	return 0;
}
