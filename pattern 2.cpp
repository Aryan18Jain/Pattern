#include <iostream>
using namespace std;
main()
{
	int i,j,rows,cols;
	cout<<"Enter the number of rows:";
	cin>>rows;
	cout<<"Enter the number of stars in a row:";
	cin>>cols;
	for(i=0;i<rows;i++)
	{
		if(i==0||i==rows-1)
		{
			for(j=0;j<cols;j++)
			cout<<"*";
			cout<<endl;
		}
		else
		{
			for(j=0;j<cols;j++)
			{
			if(j==0||j==cols-1)
			cout<<"*";
			else
			cout<<" ";
			}
			cout<<endl;
		}
	}
}
