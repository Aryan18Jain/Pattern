#include<iostream>
using namespace std;
main()
{
	int i,j,n,k=1;
	cout<<"Enter the number of rows:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k++<<" ";
		}
		cout<<endl;
	}
}
