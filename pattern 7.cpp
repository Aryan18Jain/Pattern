#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cout<<"Enter maximum number of stars:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i==n)
		{
			for(j=1;j<=2*n;j++)
			cout<<"* ";
		}
		else
		{
			for(j=1;j<=i;j++)
			cout<<"* ";
			for(j=1;j<=2*(n-i);j++)
			cout<<"  ";
			for(j=1;j<=i;j++)
			cout<<"* ";
		}
		cout<<endl;
	}
		for(i=n;i>0;i--)
	{
		if(i==n)
		{
			for(j=1;j<=2*n;j++)
			cout<<"* ";
		}
		else
		{
			for(j=1;j<=i;j++)
			cout<<"* ";
			for(j=1;j<=2*(n-i);j++)
			cout<<"  ";
			for(j=1;j<=i;j++)
			cout<<"* ";
		}
		cout<<endl;
	}
}
