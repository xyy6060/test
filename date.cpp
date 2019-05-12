#include <iostream>

using namespace std;

int main()
{
	//string date;
	int year,mon,day,date=0;
	cin >> year;
	cin >> mon;
	cin >> day;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i;
	if((year%4==0 &&year%100!=0) || year%400==0)
	{
		cout << "this is a leap year" << endl;
		for(i=0;i<mon-1;i++)
		{
			date+=b[i];
		}
		cout << "datenum=%d";
		cout << date+day << endl;
	}
	else
	{
		cout << "this not a leap year" << endl;
		for(i=0;i<mon-1;i++)
		{
			date+=a[i];
		}
		cout << "datenum:";
		cout << date+day << endl;
	}
	
	return 0;
}