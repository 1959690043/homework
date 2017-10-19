#include<iostream.h>
void main()
{
	int x;
	for(x=1;x<100;x++)
	{
		if(x<10)
			if((x*x)%10==x)
				cout<<x<<endl;
			else
				cout<<endl;
		else
			if((x*x)%100==x)
				cout<<x<<endl;
			else
				cout<<endl;
	}
}
