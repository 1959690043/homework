#include<iostream.h>
void main()
{
	int n,i;
	cin>>n;
	for(i=1;n>1;i++)
	{
		if(n%2==0)
			n=n/2;
		else
			n=n*3+1;
	}
	i=i-2;
	cout<<i<<endl;
}