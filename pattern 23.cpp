#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cout<<"Enter the value of n:";
	cin>>n;
	for(i=n;i>0;i--)
	{
		for(j=n;j>=i;j--)
		cout<<j<<" ";
		for(j=0;j<2*i-3;j++)
		cout<<i<<" ";
		for(j=i;j<=n;j++)
		{
			if(j==1)
			continue;
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(i=2;i<n+1;i++)
	{
		for(j=n;j>=i;j--)
		cout<<j<<" ";
		for(j=0;j<2*i-3;j++)
		cout<<i<<" ";
		for(j=i;j<=n;j++)
		{
			if(j==1)
			continue;
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
