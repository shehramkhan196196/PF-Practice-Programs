//71A
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int a,c=0;
	cin>>a;
	char b;
	string str[a];
	string z;
	
	for(int i=0;i<a;i++)
	{
		cin>>str[i];
	}
	for(int i=0;i<a;i++)
	{
		z = str[i];
		if(z.length() <= 10)
		{
			cout<<z<<endl;
		}
		else
		{
			b = z[0];
			cout<<b;
			int g = z.length() - 2;
			cout<<g;
			cout<<z[z.length()-1];
			cout<<endl;
		}
	}
}
