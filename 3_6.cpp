#include<iostream.h>
#include<math.h>
void main()
{
	int k;
	float r,D,S;
	cout<<"please input r,k"<<endl;
	cin>>r>>k;
	S=3.14*r*r;
	D=3.14*2*r;
	switch(k)
	{
	case 1:cout<<"S="<<S<<endl;break;
	case 2:cout<<"D="<<D<<endl;break;
	case 3:cout<<"S="<<S<<","<<"D="<<D<<endl;break;
	default:cout<<endl;
	}
}