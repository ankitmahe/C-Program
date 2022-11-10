#include<iostream>
using namespace std;
int main()
{
	int n,i,flag=0;
	cout<<"enter a positive integer : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++; 
		}
	}
	if(flag==2)
    {
	    cout<<"Number is Prime";
    }
	else
    {
	    cout<<"Number is not Prime";
    }
	return 0;
}

