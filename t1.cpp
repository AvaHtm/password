#include<iostream>
using namespace std;
int main()
{
	int pass;
	cout<<"enter pass";
	cin>>pass;
	int wrongpasswordcounter=0;
	do
	{
		int temppass;
		cout<<"temp pass:";
		cin>>temppass;
		if(pass==temppass)
		{
			cout<<"true";
			break;
		}
		else
		{
			wrongpasswordcounter++;
		}
	}while(wrongpasswordcounter<4);
	return 0;
}