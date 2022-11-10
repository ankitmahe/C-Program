#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the Vowel : ";
	cin>>ch;
	switch(ch)
	{
		case 'A' : cout<<"Your character is A\n";
	               break;
	    case 'E' : cout<<"Your character is E\n";
	               break;
        case 'I' : cout<<"Your character is I\n";
	               break;
        case 'O' : cout<<"Your character is O\n";
	               break;
	    case 'U' : cout<<"Your character is U\n";
	               break;          
	    default : cout<<"Your character is no vowel\n";
	              break;
    }
    return 0;
}
