#include<iostream>
using namespace std;
main()
{
	int i,j,n,k=1;
	cout<<"Enter the number of rows:";
	cin>>n;
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		cout<<k;
		cout<<endl;
		k++;
	}
}
