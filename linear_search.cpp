#include <iostream>
using namespace std;
int main ()
{
	cout<<"enter the size of array"<<endl;
	
	int n;
	cin>>n;
	int row[n];
	{
	cout<<"enter the element "<<endl;
    } 
	for(int i=0;i<n;i++)
	cin>>row[i];
    {
	cout<<"enter the element to be search "<<endl;
     }
	int k;
	cin>>k;
	bool flag=0;
	for (int i=0;i<n;i++)
	{
		if (k==row[i])
		{
			cout<<"element to be found at location "<<i<<endl;
			flag=1;
		}
	}
	if (flag==0)
	{
		cout<<"element not found"<<endl;
	}
}
