#include <iostream.h>
void main()
{
	int x;
	cout<<"cinx"<<endl;
	cin>>x;
	if(x<10)
		cout<<"x<10"<<endl;
	else
		if(x<100)
			cout<<"10<=x<=99"<<endl;
		else
			if(x<1000)
				cout<<"100<=x<=999"<<endl;
			else
				cout<<"x>=1000"<<endl;
}