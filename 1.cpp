#include<iostream.h>
#define M 10
void main()
{
	int i,s,m,n,min,max;
	static int a[M];
	cin>>a[M];
	max=min=a[0];
	for(i=0;i<M;i++)
	{
		if(a[i]>max)
		{
			max=a[i],m=i;
		}
		if(a[i]<min)
		{
			min=a[i],n=i;
		}
	}
	s=a[m];
	a[m]=a[n];
	a[n]=s;
	for(i=0;i<M;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<endl;
}
