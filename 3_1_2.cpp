#include<iostream.h>
void main()
{
	int x,i=1;
	cout<<"plese input x:"<<endl;
	cin>>x;
	while(x>9)
	{
		x=x/10;
		i++;
	}
	cout<<"i="<<endl;
	switch(i)
	{
	case 1:cout<<"x<10";break;
	case 2:cout<<"10<=x<=99";break;
	case 3:cout<<"100<=x<=999";break;
	default:cout<<"x>=1000";
	}
}