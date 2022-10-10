#include<iostream>
using namespace std;
main()
{
	int n,i,j,m;
	cout<<"Enter the maximum number of stars:";
	cin>>n;
	m=n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cout<<"*";
		n--;
		cout<<endl;
	}
}
