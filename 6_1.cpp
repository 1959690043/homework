#include<iostream.h>
#define M 10
void main()
{
	int i,j,k,t,max,min;
	static int a[M];
	cin>>a[i];
	k=j=0;
	max=min=a[0];
	for(i=0;i<=10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			k=i;
		}
		if(min>a[i])
		{
			min=a[i];
			j=i;
		}
	}
	t=a[k];
	a[k]=a[j];
	a[j]=t;
	cout<<max<<endl;
	cout<<min<<endl;
	for(i=0;i<=10;i++)
		cout<<"a["<<i<<"]="<<a[i]<<endl;
}
