#include<constrea.h>
void main()
{
clrscr();
int i,a,b,c,y=0,x ;
cout<<"A \t B \t INFINITE no.";
for(i=0;i<2;)
	{
	cout<<"\n";
	cin>>a;

	if(a<0)
	break;

	cout<<"\t ";
	cin>>b;

	if(b<0)
	break;

	c=a+b+y;

	x=c%10;
	y=c/10;

	cout<<"\t\t     "<<x;

	}

getch();
}