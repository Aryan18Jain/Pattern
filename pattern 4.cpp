#include<iostream>
using namespace std;
main()
{
	int n,i,j,m;
	cout<<"Enter the maximum number of stars:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
}
