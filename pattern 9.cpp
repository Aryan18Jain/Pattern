#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cout<<"Enter maximum number of rows:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			cout<<"1 ";
			else
			cout<<"0 ";
		}
		cout<<endl;
	}
}
