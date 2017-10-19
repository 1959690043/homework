#include<iostream.h>
void main()
{
	int x,i,t;
	i=0;
	for(x=2000;x<=3000;x++)
	{
		t=0;
		if(x%400==0||x%4==0&&x%100!=0)
			t=1;
			if(t)
			{
				cout<<"\t"<<x;
				i++;
				if(i%10==0)
				cout<<endl;
			}
	}
}