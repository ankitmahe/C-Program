#include<iostream>
using namespace std;
int main()
{
	float s1,s2,s3,s4,s5,sum,avg;
	float per;
	cout<<"enter 5 subject marks :";
	cin>>s1>>s2>>s3>>s4>>s5;
	sum=s1+s2+s3+s4+s5;
	avg=sum/5;
	per=(sum/500)*100;
	cout<<sum<<endl;
	cout<<avg<<endl;
	cout<<per;
	return 0;
}
