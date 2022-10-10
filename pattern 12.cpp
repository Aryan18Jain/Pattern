#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter the number of rows:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		cout<<"  ";
		for(j=i;j>0;j--)
		cout<<j<<" ";
		if(i!=1)
		{
			for(j=2;j<=i;j++)
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
