// Discount
#include<iostream>
using namespace std;
int main()
{
	int purchase,discount,payment;
	cout<<"enter a purchase = ";
	cin>>purchase;
	cout<<"enter a discount = ";
	cin>>discount;
	discount=purchase*10/100;
	cout<<"Discount of = "<<discount<<endl;
	payment=purchase-discount;
	cout<<"Payment of = "<<payment;
	return 0;
}
