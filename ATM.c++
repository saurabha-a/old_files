#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int X,Y;
double y;
int main()
{
	cin>>X>>y;
	Y=round(y*100);
	if(X%5!=0||Y<X*100+50);
	else
	{
		Y-=X*100+50;
	}
	cout<<Y/100<<".";
	Y%=100;
	if(Y<10)cout<<0;
	cout<<Y<<endl;
	return 0;
}

