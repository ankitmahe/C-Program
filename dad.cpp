#include<iostream>
using namespace std;
int main()
{
	int days,month;
	cout<<"enter days : ";
	cin>>days;
	month=days/30;
	days=days%30;
	cout<<month<<endl<<days;
	return 0;
}
