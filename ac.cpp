#include<iostream>
using namespace std;
int main()
{
	int i,j,k,rows;
	cout<<"enter pyramid pattern number rows= ";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>i;j--)
		{
			cout<<" ";
		}																																	
		for(k=1;k<=i;k++)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
