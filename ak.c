#include<iostream>
using namespace std;
#define m 50
class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count;
	public:
		void CNT(void) {count = 0;}
		void getitems(void);
		void displaySum(void);
		void remove(void);
		void displayItems(void);
};
void ITEMS::getitems(void)
{
	cout<<"enter item code : ";
	cin>>itemCode[count];
	cout<<"enter item cost : ";
	cin>>itemPrice[count];
}
void ITEMS::displaySum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
	sum=sum+itemPrice[i];
	cout<<"\nTotal value :"<<sum<<"\n"; 
}
void ITEMS::remove(void)
{
	int a;
	cout<<"enter item code :";
	cin>>a;
	for(int i=0;i<count;i++)
	if(itemCode[i]==a)
	itemPrice[i]=0;
}
void ITEMS::displayItems(void)
{
	cout<<"\ncode price\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemCode[i];
		cout<<" "<<itemCode[i];
	}
	cout<<"\n";
}
int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do
	{
		cout<<"\nYou can do the following:"<<"Enter appropriate number\n";
		cout<<"\n1 : Add an item";
		cout<<"\n2 : Display total value";
		cout<<"\n3 : Delete an item";
		cout<<"\n4 : Display all item";
		cout<<"\n5 : Quit";
		cout<<"\n\nwhat is your option?";
		cin>>x;
		switch(x)
		{
			case 1 : order.getitems();break;
			case 2 : order.displaySum();break;
			case 3 : order.remove();break;
			case 4 : order.displayItems();break;
			case 5 : break;
			default : cout<<"enter is input;try again\n";
		}
	}
	while(x!=5);
	return 0;
}
