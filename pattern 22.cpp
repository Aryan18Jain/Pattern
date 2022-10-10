#include<iostream>
using namespace std;
main()
{
	int n,i,j,ele=1;
	cout<<"Enter maximum number of rows:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		cout<<"  ";
		for(j=0;j<=i;j++)
		{
		if(i==0||j==0)
		ele=1;
		else
		ele=ele * (i-j+1)/j;
		cout<<ele<<"   ";
		}
		cout<<endl;
	}
}
