#include<iostream.h>
void main()
{
	int x,a,b;
	cin>>x;
	a=x%3;
	b=x%7;
	if((a==0)||(b==0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}