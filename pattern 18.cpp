#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter the number of rows:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		cout<<" ";
		for(j=1;j<=(2*i)-1;j++)
		{
			if(j==1||j==2*i-1)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
		for(i=n;i>0;i--)
	{
		for(j=1;j<=(n-i);j++)
		cout<<" ";
		for(j=1;j<=(2*i)-1;j++)
		{
			if(j==1||j==2*i-1)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
