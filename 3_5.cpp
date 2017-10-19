#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,d;
	cout<<"please input a b c"<<endl;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	d=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"d="<<d<<endl;
}
