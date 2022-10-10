#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cout<<"Enter maximum number:";
	cin>>n;
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		cout<<j<<" ";
		cout<<endl;
	}
}
