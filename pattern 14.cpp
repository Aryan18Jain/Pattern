#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter the number of stars:";
	cin>>n;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i==2&&j%4==0)
		cout<<"* ";
		else if((i+j)%4==0)
		cout<<"* ";
		else
		cout<<"  ";
		}
		cout<<endl;
	}
}
