#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter a year : ";
	cin>>year;
	if(year%100==0)
	{
		if(year%400==0)
		{
		cout<<"It is Leapyear";
		}
		else
		{
			cout<<"It is not Leapyear";
		}
	}
	else if (year%4==0)
	{
		cout<<"It is not Leapyear";
	}
	else
		{
			cout<<"It is not Leapyear";
		}
	
	return 0;
}
