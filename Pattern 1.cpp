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
		for(j=0;j<cols;j++)
		cout<<"*";
		cout<<endl;
	}
}
